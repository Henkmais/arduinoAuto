int enA = 2;
int in1 = 3;
int in2 = 4;

// Motor B connections
// MOTOR LINKS
int in3 = 5;
int in4 = 6;
int enB = 7;

int buzzer = 8;

// Bluetooth module connections
#include <SoftwareSerial.h>
SoftwareSerial bluetooth(11 , 12); // RX, TX

bool headlightsOn = false; // Variable to track headlights state

void setup() {
//Motoren
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
// Extra componenten
  pinMode(buzzer, OUTPUT);
  
  // Set the baud rate for the Bluetooth module
  bluetooth.begin(9600);

  // Initialize Serial communication for debugging
  Serial.begin(9600);
  Serial.print("Setup");

}

void loop() {
  // Read the incoming data from the Bluetooth module
  if (bluetooth.available() > 0) {
    char command = bluetooth.read();
    Serial.print("Loop");

    // Forward
    if (command == 'F') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
      analogWrite(enA, 200);
      analogWrite(enB, 200);
      digitalWrite(buzzer, LOW);
      Serial.print("Vooruit");

    }

    // Backward
    else if (command == 'B') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enA, 200);
      analogWrite(enB, 200);
      digitalWrite(buzzer, LOW); // Activate the buzzer when going backward
      Serial.print("Achteruit");

    }

    // Left
    else if (command == 'L') {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(enA, 200);
      analogWrite(enB, 0);
      digitalWrite(buzzer, LOW);
      Serial.print("Left");

    }

    // Right
    else if (command == 'R') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
      analogWrite(enA, 0);
      analogWrite(enB, 200);
      digitalWrite(buzzer, LOW);
      Serial.print("Right");

    }

    // Stop
    else if (command == 'S') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(enA, 0);
      analogWrite(enB, 0);
      digitalWrite(buzzer, LOW);
      Serial.print("Stop");
    }
    // Stop
    else if (command == '0') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, LOW);
      analogWrite(enA, 0);
      analogWrite(enB, 0);
      digitalWrite(buzzer, LOW);
    }
    
  
  }
}
