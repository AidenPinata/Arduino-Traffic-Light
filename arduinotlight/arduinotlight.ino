//Horizontal Traffic lights 
#define HRED_PIN 7
#define HYELLOW_PIN 4
#define HGREEN_PIN 2

//Vertical Traffic light 
#define VRED_PIN 6
#define VYELLOW_PIN 5
#define VGREEN_PIN 3

//Delays
#define GREEN_DELAY 6000
#define YELLOW_DELAY 3000
// #define RED_DELAY 10000

void setup() {
  pinMode(HRED_PIN, OUTPUT);
  pinMode(HYELLOW_PIN, OUTPUT);
  pinMode(HGREEN_PIN, OUTPUT);

  pinMode(VRED_PIN, OUTPUT);
  pinMode(VYELLOW_PIN, OUTPUT);
  pinMode(VGREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(HYELLOW_PIN, LOW);
  digitalWrite(HRED_PIN, HIGH);
  digitalWrite(VRED_PIN, HIGH);
  digitalWrite(HGREEN_PIN,LOW);
  delay(2000);
  digitalWrite(HRED_PIN, LOW);
  digitalWrite(HGREEN_PIN, HIGH);
  digitalWrite(VRED_PIN, HIGH);
  delay(GREEN_DELAY);
  digitalWrite(HYELLOW_PIN, HIGH);
  digitalWrite(HGREEN_PIN, LOW);
  delay(YELLOW_DELAY);
}


