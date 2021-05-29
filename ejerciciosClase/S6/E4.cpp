//https://www.tinkercad.com/things/1DC3kFe1pj0-brave-juttuli/editel?sharecode=ZGPrjz1sAU_OsNyCVE3cYrs5qtQi9tO6FxARO-sdxbs

class componente{
	public:
      componente(byte _pin){
		pin=_pin;
      }
  	protected:
  		byte pin;
};

class led : public componente{
	public:
  		led(byte _pin):componente(_pin){
  			pinMode(pin,OUTPUT);
 	 	}
  
  		void onOff(bool accion){
          if(accion){
          	digitalWrite(pin,HIGH);
          }else{
          	digitalWrite(pin,LOW);
          }
  		}
};

class pulsador: public componente{
	public:
  		pulsador(byte _pin):componente(_pin){
  			pinMode(pin,INPUT);
 	 	}
  
  		bool obtenerValor(){
  			return digitalRead(pin);
 		}
};

led bombilloVerde(7);
led bombilloRojo(2);
led bombilloAmarillo(4);
pulsador boton(12);

void setup()
{
  	Serial.begin(9600);
	bombilloVerde.onOff(1);
    bombilloRojo.onOff(1);
  	bombilloAmarillo.onOff(1);
}

void loop()
{
	Serial.println(boton.obtenerValor());
}