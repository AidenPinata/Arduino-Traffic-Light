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

//Fourth traffic light (Top side)
#define TL4_RED_PIN 9
#define TL4_YELLOW_PIN 10
#define TL4_GREEN_PIN 11

// //First Crosswalk light (Top side)
// #define CW1_RED_PIN pass
// #define CW1_GREEN_PIN pass

// //Second Crosswalk light (Bottom side)
// #define CW2_RED_PIN pass
// #define CW2_GREEN_PIN pass

// //Third Crosswalk light (Left side)
// #define CW3_RED_PIN pass
// #define CW3_GREEN_PIN pass

// //First Crosswalk light (Right side)
// #define CW4_RED_PIN pass
// #define CW4_GREEN_PIN pass

//Cooldowns for each light whether its red,green or yellow
int Greenlightactivate 6000
int Redlightactivate 10000
int Yellowlight activate 3000
//Setting up each LED as an output for lights
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

  // pinMode(CW1_RED_PIN, OUTPUT);
  // pinMode(CW1_GREEN_PIN, OUTPUT);

  // pinMode(CW2_RED_PIN, OUTPUT);
  // pinMode(CW2_GREEN_PIN, OUTPUT);

  // pinMode(CW3_RED_PIN, OUTPUT);
  // pinMode(CW3_GREEN_PIN, OUTPUT);

  // pinMode(CW4_RED_PIN, OUTPUT);
  // pinMode(CW4_GREEN_PIN, OUTPUT);
  
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

