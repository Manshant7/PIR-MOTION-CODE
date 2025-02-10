const int PIRSensorPin = 2;
const int ledPin = 13;

void setup() {
    pinMode(PIRSensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int motionState = digitalRead(PIRSensorPin);

    if (motionState == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Motion detected.LED turned ON");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("No motion detected.LED turned OFF");
    }

    delay(500);
}
