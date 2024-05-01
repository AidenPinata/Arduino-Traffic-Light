//Horizontal Traffic lights 
#define HRED_PIN 7
#define HYELLOW_PIN 4
#define HGREEN_PIN 2

//Vertical Traffic light 
#define VRED_PIN 6
#define VYELLOW_PIN 5
#define VGREEN_PIN 3

//Delays
#define GREEN_DELAY 4000
#define YELLOW_DELAY 2000
#define RED_DELAY 2000

//Setting up both the horziontal and vertical lights for the traffic lights
void setup() {
  //Horizontal
  pinMode(HRED_PIN, OUTPUT);
  pinMode(HYELLOW_PIN, OUTPUT);
  pinMode(HGREEN_PIN, OUTPUT);

  //Vertical
  pinMode(VRED_PIN, OUTPUT);
  pinMode(VYELLOW_PIN, OUTPUT);
  pinMode(VGREEN_PIN, OUTPUT);
}

void loop() {
  //When all traffic lights are red
  digitalWrite(HRED_PIN, HIGH);
  digitalWrite(VRED_PIN, HIGH);
  digitalWrite(HGREEN_PIN,LOW);
  //Timing for All red lighting on both the horizontal
  delay(RED_DELAY);

  //When the vertical light are red makes the horizontal light turn off (LOW) and make the green turn on (HIGH)
  digitalWrite(HRED_PIN, LOW);
  digitalWrite(HGREEN_PIN, HIGH);
  digitalWrite(VRED_PIN, HIGH);
  //Timing for how long Green needs to be off for
  delay(GREEN_DELAY);

  //When the Horzontal lights are turning yellow and the green turns off
  digitalWrite(HYELLOW_PIN, HIGH);
  digitalWrite(HGREEN_PIN, LOW);
  //Yellow timing 
  delay(YELLOW_DELAY);

  //Turns the Horzontal light from yellow to red and again sets all lights red
  digitalWrite(HYELLOW_PIN, LOW);
  digitalWrite(HRED_PIN, HIGH);
  digitalWrite(VRED_PIN, HIGH);
  //Red Timing
  delay(RED_DELAY);

  //Turns the Vertical lights from Red to Green
  digitalWrite(VRED_PIN, LOW);
  digitalWrite(VGREEN_PIN, HIGH);
  //Green timing
  delay(GREEN_DELAY);

  //Turns the Vertical light from Green to Yellow
  digitalWrite(VGREEN_PIN, LOW);
  digitalWrite(VYELLOW_PIN, HIGH);
  //Yellow timing 
  delay(YELLOW_DELAY);

  //Turns the Vertical light from Yellow to Red
  digitalWrite(VYELLOW_PIN, LOW);
  digitalWrite(VRED_PIN, HIGH);
  //Yellow timing 
  delay(YELLOW_DELAY);
}


