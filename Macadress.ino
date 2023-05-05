#include <Ethernet.h>

byte mac[6];

void setup() {
  // Инициализируем генератор случайных чисел
  randomSeed(analogRead(0));
  
  // Генерируем случайный MAC-адрес
  for (int i = 0; i < 6; i++) {
    mac[i] = random(256);
  }
  
  // Настраиваем Ethernet
  Ethernet.begin(mac);
  
  // Открываем последовательный порт
  Serial.begin(9600);
}

void loop() {
  // Выводим MAC-адрес на монитор порта
  Serial.print("MAC-адрес: ");
  for (int i = 0; i < 6; i++) {
    Serial.print(mac[i], HEX);
    if (i < 5) {
      Serial.print(":");
    }
  }
  Serial.println();
  
  delay(1000);
}
