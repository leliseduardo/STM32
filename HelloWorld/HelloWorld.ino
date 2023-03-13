/*

      Este código tem a função de fazer o Hello World do STM32 e testar a conexão e gravação da placa.

      O HelloWorld funcionou perfeitamente.

 */

void setup() {

    pinMode(PC13, OUTPUT);
}

void loop() {

    for(int i = 0; i < 10; i++){
        digitalWrite(PC13, LOW);
        delay(50);
        digitalWrite(PC13, HIGH);
        delay(50);
    } // end for

    delay(2000);
}
