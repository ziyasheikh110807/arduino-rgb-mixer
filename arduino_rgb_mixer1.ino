int RED= 6;
int GREEN= 5;
int BLUE= 3;
int RED_POT=A0;
int GREEN_POT=A1;
int BLUE_POT=A2;
void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED_POT,INPUT);
  pinMode(GREEN_POT,INPUT);
  pinMode(BLUE_POT,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int red_value= analogRead(RED_POT);
  int green_value= analogRead(GREEN_POT);
  int blue_value= analogRead(BLUE_POT);
  
  int red_mapped=map(red_value, 0, 1023, 0, 255);
  int green_mapped=map(green_value, 0, 1023, 0, 255);
  int blue_mapped=map(blue_value, 0, 1023, 0, 255);

  
  
  Serial.print(red_mapped);
  Serial.print("|");
  Serial.print(green_mapped);
  Serial.print("|");
  Serial.println(blue_mapped);

  analogWrite(RED,red_mapped);
  analogWrite(GREEN,green_mapped);
  analogWrite(BLUE,blue_mapped);
}