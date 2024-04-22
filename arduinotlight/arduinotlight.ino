#define TL1_RED_PIN 7
#define TL1_YELLOW_PIN 4
#define TL1_GREEN_PIN 2
#define TL2_RED_PIN 12
#define TL2_YELLOW_PIN 8
#define TL2_GREEN_PIN 13

void setup() {
  pinMode(TL1_RED_PIN, OUTPUT);
  pinMode(TL1_GREEN_PIN, OUTPUT);
  pinMode(TL1_YELLOW_PIN, OUTPUT);
  pinMode(TL2_RED_PIN, OUTPUT);
  pinMode(TL2_GREEN_PIN, OUTPUT);
  pinMode(TL2_YELLOW_PIN, OUTPUT);
}

void loop() {
  digitalWrite(TL1_RED_PIN, HIGH);
  digitalWrite(TL1_YELLOW_PIN, HIGH);
  digitalWrite(TL1_GREEN_PIN, HIGH);
  digitalWrite(TL2_RED_PIN, HIGH);
  digitalWrite(TL2_YELLOW_PIN, HIGH);
  digitalWrite(TL2_GREEN_PIN, HIGH);
}

