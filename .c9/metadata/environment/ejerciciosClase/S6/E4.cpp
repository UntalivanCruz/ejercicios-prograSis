{"filter":false,"title":"E4.cpp","tooltip":"/ejerciciosClase/S6/E4.cpp","undoManager":{"mark":5,"position":5,"stack":[[{"start":{"row":0,"column":0},"end":{"row":47,"column":1},"action":"insert","lines":["class componente{","\tpublic:","      componente(byte _pin){","\t\tpin=_pin;","      }","  \tprotected:","  \t\tbyte pin;","};","","class led : public componente{","\tpublic:","  \t\tled(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,OUTPUT);"," \t \t}","  ","  \t\tvoid onOff(bool accion){","          if(accion){","          \tdigitalWrite(pin,HIGH);","          }else{","          \tdigitalWrite(pin,LOW);","          }","  \t\t}","};","","class pulsador: public componente{","\tpublic:","  \t\tpulsador(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,INPUT);"," \t \t}","  ","  \t\tbool obtenerValor(){","  \t\t\treturn digitalRead(pin);"," \t\t}","};","","led bombilloVerde(7);","pulsador boton(12);","","void setup()","{","  \tSerial.begin(9600);","\tbombilloVerde.onOff(1);","}","","void loop()","{","\tSerial.println(boton.obtenerValor());","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":47,"column":1},"action":"remove","lines":["class componente{","\tpublic:","      componente(byte _pin){","\t\tpin=_pin;","      }","  \tprotected:","  \t\tbyte pin;","};","","class led : public componente{","\tpublic:","  \t\tled(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,OUTPUT);"," \t \t}","  ","  \t\tvoid onOff(bool accion){","          if(accion){","          \tdigitalWrite(pin,HIGH);","          }else{","          \tdigitalWrite(pin,LOW);","          }","  \t\t}","};","","class pulsador: public componente{","\tpublic:","  \t\tpulsador(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,INPUT);"," \t \t}","  ","  \t\tbool obtenerValor(){","  \t\t\treturn digitalRead(pin);"," \t\t}","};","","led bombilloVerde(7);","pulsador boton(12);","","void setup()","{","  \tSerial.begin(9600);","\tbombilloVerde.onOff(1);","}","","void loop()","{","\tSerial.println(boton.obtenerValor());","}"],"id":2},{"start":{"row":0,"column":0},"end":{"row":51,"column":1},"action":"insert","lines":["class componente{","\tpublic:","      componente(byte _pin){","\t\tpin=_pin;","      }","  \tprotected:","  \t\tbyte pin;","};","","class led : public componente{","\tpublic:","  \t\tled(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,OUTPUT);"," \t \t}","  ","  \t\tvoid onOff(bool accion){","          if(accion){","          \tdigitalWrite(pin,HIGH);","          }else{","          \tdigitalWrite(pin,LOW);","          }","  \t\t}","};","","class pulsador: public componente{","\tpublic:","  \t\tpulsador(byte _pin):componente(_pin){","  \t\t\tpinMode(pin,INPUT);"," \t \t}","  ","  \t\tbool obtenerValor(){","  \t\t\treturn digitalRead(pin);"," \t\t}","};","","led bombilloVerde(7);","led bombilloRojo(2);","led bombilloAmarillo(4);","pulsador boton(12);","","void setup()","{","  \tSerial.begin(9600);","\tbombilloVerde.onOff(1);","    bombilloRojo.onOff(1);","  \tbombilloAmarillo.onOff(1);","}","","void loop()","{","\tSerial.println(boton.obtenerValor());","}"]}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":4},{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["/"]}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":121},"action":"insert","lines":["https://www.tinkercad.com/things/1DC3kFe1pj0-brave-juttuli/editel?sharecode=ZGPrjz1sAU_OsNyCVE3cYrs5qtQi9tO6FxARO-sdxbs"],"id":5}],[{"start":{"row":0,"column":121},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":6}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":1,"column":0},"end":{"row":1,"column":0},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1622330375329,"hash":"3f1977ffb09cf83860ab5a84e70b417ee698fb13"}