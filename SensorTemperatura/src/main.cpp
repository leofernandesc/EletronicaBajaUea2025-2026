#include <Wire.h>
#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void setup() {
  Serial.begin(115200);
  while (!Serial); 

  if (!mlx.begin()) {
    Serial.println("Erro ao inicializar");
    while (1);
  }
  
  Serial.println("Sensor inicializado com sucesso");
  delay(500);
}

void loop() {
  Serial.print("Temperatura do Objeto = ");
  Serial.print(mlx.readObjectTempC());
  Serial.println(" °C");
  Serial.println(); 
  delay(500); 
}
