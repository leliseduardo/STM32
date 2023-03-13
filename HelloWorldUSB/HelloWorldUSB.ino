/*

    Este programa tem a função te criar um HelloWorld simples, que será gravado através da porta USB do STM32

    O carregamento através da USB ocorreu de forma correta, e o programa funcionou perfeitamente.
    
*/

void setup() {

    pinMode(PC13, OUTPUT);
}

void loop() {

    for(int i = 0; i < 10; i++){
        digitalWrite(PC13, LOW);
        delay(100);
        digitalWrite(PC13, HIGH);
        delay(100);
    } // end for

    delay(2000);
    
} // end void loop
