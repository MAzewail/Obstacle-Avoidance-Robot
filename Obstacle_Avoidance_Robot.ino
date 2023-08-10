#define echo 3
#define trig 2
#define IN4 4
#define LEFT_MOTORSPEED 9
#define RIGHT_MOTORSPEED 10
long dis=0,duration=0;
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(32,16,2);

void ultrasonic(){
 digitalWrite(trig,0); 
 delayMicroseconds(2);  
 digitalWrite(trig,1); 
 delayMicroseconds(10);
 digitalWrite(trig,0); 
 duration=pulseIn(echo,HIGH);
 dis=0.343*duration/2;
}

void setup()
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  for(byte i=4;i<5;i++)
  pinMode(i,OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.print("Loading Robot...");
  delay(2000);
  lcd.clear();
  Serial.begin(9600);
}

void loop()
{
  ultrasonic();
  lcd.home();
  lcd.print("dis = "+String(dis)+" mm ");
  lcd.setCursor(5,1);
  if(dis>500){
  digitalWrite(IN4,1);
  lcd.print("Forward "); }
  
  else{   
    digitalWrite(IN4,0);
    lcd.print("Right    "); }
  
  dis=map(dis,0,3000,0,255);
  analogWrite(RIGHT_MOTORSPEED,dis);
  analogWrite(LEFT_MOTORSPEED,dis);
}
