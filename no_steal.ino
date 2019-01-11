int TrigPin = 8;
int EchoPin = 9;
int distance;

int S_distance = 10;

int Piezo = 7;

void setup() {
  // put your setup code here, to run once:
    pinMode(TrigPin, OUTPUT);
    pinMode(EchoPin, INPUT);

    pinMode(Piezo, OUTPUT);

    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(TrigPin, LOW);

    distance = pulseIn(EchoPin, HIGH) / 58;
    Serial.println(distance);
    delay(1000);

    if (distance >= S_distance) {
      tone(Piezo, 262, 500);
    }
    
}
