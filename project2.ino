
#define red_led 7
#define blue_led 6
#define green_led 5

void setup() {
pinMode(red_led,OUTPUT);
pinMode(blue_led,OUTPUT);
pinMode(green_led,OUTPUT);

}

void loop() {

digitalWrite(red_led,HIGH);
delay(1000);
digitalWrite(blue_led,HIGH);
delay(700);
digitalWrite(green_led,HIGH);
delay(400);
digitalWrite(red_led,LOW);
delay(100);
digitalWrite(blue_led,LOW);
delay(70);
digitalWrite(green_led,LOW);
delay(40);
}
