const int ledVerde = 12;
const int ledVermelho = 13;
const int motor = 4;
const int buttonON = 2;
const int buttonOFF = 3;  
const int g = 11;
const int f = 10;
const int e = 9;
const int d = 8;
const int c = 7;
const int b = 6;
const int a = 5;


void setup() {
	pinMode(ledVermelho, OUTPUT);
	pinMode(ledVerde, OUTPUT);
	
	pinMode(buttonON, INPUT);
	pinMode(buttonOFF, INPUT);
	
	pinMode(motor, OUTPUT);
	
	
	
	//led 7 segmentos
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);
	pinMode(e, OUTPUT);
	pinMode(f, OUTPUT);
	pinMode(g, OUTPUT);
	
	
	
	//estado incial
	digitalWrite(ledVerde, HIGH);
	digitalWrite(ledVermelho, LOW);
	digitalWrite(motor, LOW);
	
}

void loop() {
	if( digitalRead(buttonON))
	{
	//CONDIÇÕES PARA RODAR O MOTOR
	digitalWrite(ledVermelho, HIGH);
	
	digitalWrite(ledVerde, LOW);
	digitalWrite(motor, HIGH);
	
	//led
	digitalWrite(b, LOW);
	
	digitalWrite(f, HIGH);
	digitalWrite(g, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(c, HIGH);
	
	}
	
	if( digitalRead(buttonOFF))
	{
	//CONDIÇÕES PARA RODAR O MOTOR
	digitalWrite(ledVermelho, LOW);
	
	digitalWrite(ledVerde, HIGH);
	digitalWrite(motor, LOW);
	
	//led

	digitalWrite(f,  LOW);
	digitalWrite(g,  LOW);
	digitalWrite(e,  LOW);
	digitalWrite(d,  LOW);
	digitalWrite(c,  LOW);
	
	digitalWrite(b, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(c, HIGH);
	}

}
