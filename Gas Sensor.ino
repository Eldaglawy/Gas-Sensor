int v_GasSen = 0;

void setup ()
{
pinMode (A0, INPUT);
pinMode (7, OUTPUT);
}
void loop ()
{
//Gas Sensor & Buzzer
v_GasSen = analogRead(A0);
if (v_GasSen >= 250)
{
	tone(7, 523, 1000); //play tone 60 (C5 = 523 Hz)
}
delay (10); // Delaying to improve the performance
}