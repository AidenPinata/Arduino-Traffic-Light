#define CW1_RED_PIN 0
#define CW1_GREEN_PIN 1
#define CW2_RED_PIN 2
#define CW2_GREEN_PIN 3
#define CW3_RED_PIN 4
#define CW3_GREEN_PIN 5
#define CW3_RED_PIN 6
#define CW3_GREEN_PIN 7


void setup() {
  pinMode(CW1_RED_PIN, OUTPUT);
  pinMode(CW1_GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(CW1_RED_PIN, HIGH);
}

