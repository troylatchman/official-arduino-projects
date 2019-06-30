const int optoPin = 2;
// we will drive an led attached to pin 4 (anode) and 5 (cathode).

void setup()
{
    pinMode(optoPin, OUTPUT);
}

void loop()
{
    digitalWrite(optoPin, HIGH);
    delay(3000);
    digitalWrite(optoPin, LOW);
    delay(3000);
}