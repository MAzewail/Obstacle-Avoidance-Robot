#define echo 3
#define trig 2
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
  for(byte i=4;i<10;i++)
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
  lcd.print("dis = ");
  lcd.print(dis);
  lcd.print(" mm ");
  digitalWrite(5,1);
  if(dis>500){
  digitalWrite(7,1);
   lcd.setCursor(5,1);
   lcd.print("Forward "); 
  }
  else{   
    lcd.setCursor(5,1);
    lcd.print("Right    "); }
  dis=map(dis,0,3000,0,255);
  analogWrite(8,dis);
  analogWrite(9,dis);
}