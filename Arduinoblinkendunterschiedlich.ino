const int pin = 2;
const int anderepin = 3;
void setup() {
pinMode(pin, OUTPUT);

}
void fkt1 (const int inp); {
digitalWrite(inp, HIGH);
delay (500);
digitalWrite(inp, LOW);
}
void fkt2 (const int inp); {
digitalWrite(inp, HIGH);
delay (1500);
digitalWrite(inp, LOW);
}
void loop() {
fkt1 (pin);
fkt2 (anderepin);
}
