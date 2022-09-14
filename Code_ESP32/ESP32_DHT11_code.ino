#include <WiFi.h>
#include <PubSubClient.h>
 
const char* ssid = "Vodafone-9C4FA2";
const char* password =  "SgA6BzshV8";
const char* mqttServer = "192.168.1.102";
const int mqttPort = 1883;

WiFiClient espClient;
PubSubClient client(espClient);
 


#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#include "DHT.h"
#define DHT_PIN 14
#define DHTTYPE DHT11

DHT dht(DHT_PIN, DHT11);

int hum = 0;
String hum_str;
char hum_char[50];

int tem = 0;
String tem_str;
char tem_char[50];


void setup() {
  Serial.begin(115200);
  Serial.println("Sensor de Humidade");

  dht.begin();


  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(5000);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");
 
  client.setServer(mqttServer, mqttPort);
 
  while (!client.connected()) {
    Serial.println("Connecting to MQTT...");
 
    if (client.connect("ESP32Client", "","" )) {
 
      Serial.println("connected");
 
    } else {
 
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
 
    }
  }
  
 
}

void loop() {
  //delay(5000);
  Sensor_humidade();
  client.loop();
}

void Sensor_humidade() {
  hum = dht.readHumidity();
  tem = dht.readTemperature();

  while (isnan(hum)) {
    Serial.println("Falha de leitura");
    delay(2000);
    hum = dht.readHumidity();
    tem = dht.readTemperature();

  }

  Serial.print("Humidade:");
  Serial.print(hum);
  Serial.println("%.");

  Serial.print("Temperatura:");
  Serial.print(tem);
  
  Serial.println("---------------------------");

  delay(150);
  
  hum_str = String(hum); //converting Humidity (the float variable above) to a string
  hum_str.toCharArray(hum_char, hum_str.length() + 1); //packaging up the data to publish to mqtt whoa...
  client.publish("topico/hum",hum_char);


  tem_str = String(tem); //converting Humidity (the float variable above) to a string
  tem_str.toCharArray(tem_char, tem_str.length() + 1); //packaging up the data to publish to mqtt whoa...
  client.publish("topico/temperatura_dht",tem_char);
 

}
