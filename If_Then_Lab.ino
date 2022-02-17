/* description: Code to make a LED blink on, delay, then back off, delay, then blink on again. The delay and time lit will rise by 250ms each time, until they hit a maximum of 3000ms; then they will return to 50ms.
Zack Ghosio
10/17/14
For: CSC121
*/
int red=2;
int time=50;
void setup() {
  // put your setup code here, to run once:
pinMode (red,OUTPUT);
}

void loop() {
  // time is used for both the delay while off and while on, so that both the time off and time on will rise together.
  delay(time);
  digitalWrite(red,HIGH);
  delay(time);
  digitalWrite(red,LOW);
  time=time+250;
  if (time>=3000){
    time=50;} 
}
