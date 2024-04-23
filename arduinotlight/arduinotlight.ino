//First traffic light (Left side)
#define TL1_RED_PIN 7
#define TL1_YELLOW_PIN 4
#define TL1_GREEN_PIN 2

//Second traffic light (Right side)
#define TL2_RED_PIN 12
#define TL2_YELLOW_PIN 8
#define TL2_GREEN_PIN 13

//Third traffic light (Bottom side)
#define TL3_RED_PIN 3
#define TL3_YELLOW_PIN 5
#define TL3_GREEN_PIN 6

//Fourth traffic light (Top side)
#define TL4_RED_PIN 9
#define TL4_YELLOW_PIN 10
#define TL4_GREEN_PIN 11

//Setting up each LED as an output for lighting
void setup() {
  pinMode(TL1_RED_PIN, OUTPUT);
  pinMode(TL1_GREEN_PIN, OUTPUT);
  pinMode(TL1_YELLOW_PIN, OUTPUT);

  pinMode(TL2_RED_PIN, OUTPUT);
  pinMode(TL2_GREEN_PIN, OUTPUT);
  pinMode(TL2_YELLOW_PIN, OUTPUT);

  pinMode(TL3_RED_PIN, OUTPUT);
  pinMode(TL3_GREEN_PIN, OUTPUT);
  pinMode(TL3_YELLOW_PIN, OUTPUT);

  pinMode(TL4_RED_PIN, OUTPUT);
  pinMode(TL4_GREEN_PIN, OUTPUT);
  pinMode(TL4_YELLOW_PIN, OUTPUT);
}

void loop() {
  digitalWrite(TL1_RED_PIN, HIGH);
  digitalWrite(TL1_YELLOW_PIN, HIGH);
  digitalWrite(TL1_GREEN_PIN, HIGH);

  digitalWrite(TL2_RED_PIN, HIGH);
  digitalWrite(TL2_YELLOW_PIN, HIGH);
  digitalWrite(TL2_GREEN_PIN, HIGH);

  digitalWrite(TL3_RED_PIN, HIGH);
  digitalWrite(TL3_YELLOW_PIN, HIGH);
  digitalWrite(TL3_GREEN_PIN, HIGH);

  digitalWrite(TL3_RED_PIN, HIGH);
  digitalWrite(TL3_YELLOW_PIN, HIGH);
  digitalWrite(TL3_GREEN_PIN, HIGH);

  digitalWrite(TL4_RED_PIN, HIGH);
  digitalWrite(TL4_YELLOW_PIN, HIGH);
  digitalWrite(TL4_GREEN_PIN, HIGH);
}

