	//cubo led com arrays.ino

/*
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
=																								=
=																								=
=									CUBO DE LED 3X3X3											=
=																								=
= ->Todas as funções possuem paramentros que devem ser definidos para que elas funcionem.		=
= ->As instruções de cada paramentro são informadas no cabeçalho de cada função.				=
=																								=
=																								=
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/
#include <Arduino.h>

int cols[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
int level[] = {13, 12, 11};

void setup() {
	for(int  i = 0; i < 9;  i++){
	    pinMode(cols[i], OUTPUT);
	}
	for(int i = 0; i < 3; i++){
	    pinMode(level[i], OUTPUT);
	}
	Serial.begin(9600);
}
void ledsOn(int colun, int lev, int temp) {

	/*
	 Parametros ledsOn:
	int colun: índice da coluna que será ligada.
	int lev: índice do nível que será ligado.
	int temp: tempo em milisegundos que a função permanecerá ligada.
	*/

	digitalWrite(cols[colun], 1); digitalWrite(level[lev], 1);
	delay(temp);
}
void ledsOff(int colun, int lev, int temp) {	

	/* Parametros ledsOff:
	int colun: índice da coluna que será desligada.
	int lev: índice do nível que será desligado.
	int int temp: tempo em milisegundos que a função permanecerá desligada.
	*/ 

	digitalWrite(cols[colun], 0); digitalWrite(level[lev], 0);
	delay(temp);
}
void ledsOnAll(int temp) {

	/* Parametros ledsOnAll:
	int temp: tempo em milisegundos em que a função permanecerá operando.
	*/

	digitalWrite(cols[0], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[1], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[2], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[3], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[4], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[5], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[6], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[7], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);
	digitalWrite(cols[8], 1); digitalWrite(level[0], 1); digitalWrite(level[1], 1); digitalWrite(level[2], 1);

	delay(temp);
}
void ledsOffAll(int temp){
	digitalWrite(cols[0], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[1], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[2], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[3], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[4], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[5], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[6], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[7], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);
	digitalWrite(cols[8], 0); digitalWrite(level[0], 0); digitalWrite(level[1], 0); digitalWrite(level[2], 0);

	delay(temp);
}
void giro(int varGiro, int tempGiro) {

	/* Parametro giro:
	int tempGiro: define a quantidade de vezes que a sequencia será executada e o tempo que as funções
	seram executadas
	int tempoGiro: define o tempo em que os leds ficam acesos e consequentemente a velocidade do giro.
	*/
	
	for(int i = 0; i < varGiro; i ++){
	  	
		ledsOn(0, 0, tempGiro);
		ledsOff(0, 0, tempGiro);
		ledsOn(1, 0, tempGiro);
		ledsOff(1, 0, tempGiro);
		ledsOn(2, 0, tempGiro);
		ledsOff(2, 0, tempGiro);
		ledsOn(5, 0, tempGiro);
		ledsOff(5, 0, tempGiro);
		ledsOn(8, 0, tempGiro);
		ledsOff(8, 0, tempGiro);
		ledsOn(7, 0, tempGiro);
		ledsOff(7, 0, tempGiro);
		ledsOn(6, 0, tempGiro);
		ledsOff(6, 0, tempGiro);
		ledsOn(3, 0, tempGiro);
		ledsOff(3, 0, tempGiro);

		ledsOn(0, 1, tempGiro);
		ledsOff(0, 1, tempGiro);
		ledsOn(1, 1, tempGiro);
		ledsOff(1, 1, tempGiro);
		ledsOn(2, 1, tempGiro);
		ledsOff(2, 1, tempGiro);
		ledsOn(5, 1, tempGiro);
		ledsOff(5, 1, tempGiro);
		ledsOn(8, 1, tempGiro);
		ledsOff(8, 1, tempGiro);
		ledsOn(7, 1, tempGiro);
		ledsOff(7, 1, tempGiro);
		ledsOn(6, 1, tempGiro);
		ledsOff(6, 1, tempGiro);
		ledsOn(3, 1, tempGiro);
		ledsOff(3, 1, tempGiro);

		ledsOn(0, 2, tempGiro);
		ledsOff(0, 2, tempGiro);
		ledsOn(1, 2, tempGiro);
		ledsOff(1, 2, tempGiro);
		ledsOn(2, 2, tempGiro);
		ledsOff(2, 2, tempGiro);
		ledsOn(5, 2, tempGiro);
		ledsOff(5, 2, tempGiro);
		ledsOn(8, 2, tempGiro);
		ledsOff(8, 2, tempGiro);
		ledsOn(7, 2, tempGiro);
		ledsOff(7, 2, tempGiro);
		ledsOn(6, 2, tempGiro);
		ledsOff(6, 2, tempGiro);
		ledsOn(3, 2, tempGiro);
		ledsOff(3, 2, tempGiro);

		ledsOn(4, 2, 100);
		ledsOff(4, 2, 100);
		ledsOn(4, 1, 100);
		ledsOff(4, 1, 100);
		ledsOn(4, 0, 100);
		ledsOff(4, 0, 100);

		ledsOn(3, 2, tempGiro);
		ledsOff(3, 2, tempGiro);
		ledsOn(6, 2, tempGiro);
		ledsOff(6, 2, tempGiro);
		ledsOn(7, 2, tempGiro);
		ledsOff(7, 2, tempGiro);
		ledsOn(8, 2, tempGiro);
		ledsOff(8, 2, tempGiro);
		ledsOn(5, 2, tempGiro);
		ledsOff(5, 2, tempGiro);
		ledsOn(2, 2, tempGiro);
		ledsOff(2, 2, tempGiro);
		ledsOn(0, 2, tempGiro);
		ledsOff(0, 2, tempGiro);

		ledsOn(3, 1, tempGiro);
		ledsOff(3, 1, tempGiro);
		ledsOn(6, 1, tempGiro);
		ledsOff(6, 1, tempGiro);
		ledsOn(7, 1, tempGiro);
		ledsOff(7, 1, tempGiro);
		ledsOn(8, 1, tempGiro);
		ledsOff(8, 1, tempGiro);
		ledsOn(5, 1, tempGiro);
		ledsOff(5, 1, tempGiro);
		ledsOn(2, 1, tempGiro);
		ledsOff(2, 1, tempGiro);
		ledsOn(0, 1, tempGiro);
		ledsOff(0, 1, tempGiro);

		ledsOn(3, 0, tempGiro);
		ledsOff(3, 0, tempGiro);
		ledsOn(6, 0, tempGiro);
		ledsOff(6, 0, tempGiro);
		ledsOn(7, 0, tempGiro);
		ledsOff(7, 0, tempGiro);
		ledsOn(8, 0, tempGiro);
		ledsOff(8, 0, tempGiro);
		ledsOn(5, 0, tempGiro);
		ledsOff(5, 0, tempGiro);
		ledsOn(2, 0, tempGiro);
		ledsOff(2, 0, tempGiro);
		ledsOn(0, 0, tempGiro);
		ledsOff(0, 0, tempGiro);

		ledsOn(4, 0, 100);
		ledsOff(4, 0, 100);
		ledsOn(4, 1, 100);
		ledsOff(4, 1, 100);
		ledsOn(4, 2, 100);
		ledsOff(4, 2, 100);
	}
}
void colunas(int tempCol, int atraso) {

	/*Parametro colunas:
	int tempCol: define o a precisão em que os leds são acesos, quanto maior o tempo mais lento será.
	int atraso: define o tempo em milisegundo em que o proximo bloco será executado.
	*/
	
	ledsOn(6, 2, tempCol); 
	ledsOn(7, 2, tempCol); 
	ledsOn(8, 2, tempCol);
	ledsOn(6, 1, tempCol); 
	ledsOn(7, 1, tempCol); 
	ledsOn(8, 1, tempCol);
	ledsOn(6, 0, tempCol); 
	ledsOn(7, 0, tempCol); 
	ledsOn(8, 0, tempCol);
	delay(atraso);
	ledsOff(6, 2, 0); 
	ledsOff(7, 2, 0); 
	ledsOff(8, 2, 0);
	ledsOff(6, 1, 0); 
	ledsOff(7, 1, 0); 
	ledsOff(8, 1, 0);
	ledsOff(6, 0, 0); 
	ledsOff(7, 0, 0); 
	ledsOff(8, 0, 0);

	
	ledsOn(3, 2, tempCol);
	ledsOn(4, 2, tempCol);
	ledsOn(5, 2, tempCol);
	ledsOn(3, 1, tempCol); 
	ledsOn(4, 1, tempCol); 
	ledsOn(5, 1, tempCol);
	ledsOn(3, 0, tempCol); 
	ledsOn(4, 0, tempCol); 
	ledsOn(5, 0, tempCol);
	delay(atraso);
	ledsOff(3, 2, 0);
	ledsOff(4, 2, 0); 
	ledsOff(5, 2, 0);
	ledsOff(3, 1, 0); 
	ledsOff(4, 1, 0); 
	ledsOff(5, 1, 0);
	ledsOff(3, 0, 0); 
	ledsOff(4, 0, 0);
	ledsOff(5, 0, 0);
	
	ledsOn(0, 2, tempCol); 
	ledsOn(1, 2, tempCol); 
	ledsOn(2, 2, tempCol);
	ledsOn(0, 1, tempCol); 
	ledsOn(1, 1, tempCol);
	ledsOn(2, 1, tempCol);
	ledsOn(0, 0, tempCol); 
	ledsOn(1, 0, tempCol); 
	ledsOn(2, 0, tempCol);
	delay(atraso);
	ledsOff(0, 2, 0); 
	ledsOff(1, 2, 0); 
	ledsOff(2, 2, 0);
	ledsOff(0, 1, 0); 
	ledsOff(1, 1, 0); 
	ledsOff(2, 1, 0);
	ledsOff(0, 0, 0); 
	ledsOff(1, 0, 0); 
	ledsOff(2, 0, 0);
	
	ledsOn(8, 2, tempCol); 
	ledsOn(5, 2, tempCol); 
	ledsOn(2, 2, tempCol);
	ledsOn(8, 1, tempCol);
	ledsOn(5, 1, tempCol);
	ledsOn(2, 1, tempCol);
	ledsOn(8, 0, tempCol);
	ledsOn(5, 0, tempCol); 
	ledsOn(2, 0, tempCol);
	delay(atraso);
	ledsOff(8, 2, 0); 
	ledsOff(5, 2, 0); 
	ledsOff(2, 2, 0);
	ledsOff(8, 1, 0); 
	ledsOff(5, 1, 0);
	ledsOff(2, 1, 0);
	ledsOff(8, 0, 0); 
	ledsOff(5, 0, 0); 
	ledsOff(2, 0, 0);
	
	ledsOn(7, 2, tempCol);
	ledsOn(4, 2, tempCol); 
	ledsOn(1, 2, tempCol);
	ledsOn(7, 1, tempCol); 
	ledsOn(4, 1, tempCol); 
	ledsOn(1, 1, tempCol);
	ledsOn(7, 0, tempCol); 
	ledsOn(4, 0, tempCol); 
	ledsOn(1, 0, tempCol);
	delay(atraso);
	ledsOff(7, 2, 0); 
	ledsOff(4, 2, 0); 
	ledsOff(1, 2, 0);
	ledsOff(7, 1, 0); 
	ledsOff(4, 1, 0); 
	ledsOff(1, 1, 0);
	ledsOff(7, 0, 0); 
	ledsOff(4, 0, 0);
	ledsOff(1, 0, 0);
	
	ledsOn(6, 2, tempCol); 
	ledsOn(3, 2, tempCol);
	ledsOn(0, 2, tempCol);
	ledsOn(6, 1, tempCol); 
	ledsOn(3, 1, tempCol); 
	ledsOn(0, 1, tempCol);
	ledsOn(6, 0, tempCol);
	ledsOn(3, 0, tempCol);
	ledsOn(0, 0, tempCol);
	delay(atraso);
	ledsOff(6, 2, 0);
	ledsOff(3, 2, 0); 
	ledsOff(0, 2, 0);
	ledsOff(6, 1, 0); 
	ledsOff(3, 1, 0); 
	ledsOff(0, 1, 0);
	ledsOff(6, 0, 0); 
	ledsOff(3, 0, 0); 
	ledsOff(0, 0, 0);

	ledsOn(0, 2, tempCol); 
	ledsOn(0, 1, tempCol); 
	ledsOn(0, 0, tempCol);
	ledsOn(3, 1, tempCol); 
	ledsOn(3, 1, tempCol); 
	ledsOn(3, 1, tempCol);
	ledsOn(1, 0, tempCol); 
	ledsOn(1, 0, tempCol); 
	ledsOn(1, 0, tempCol);
	delay(atraso);
	ledsOff(0, 2, 0); 
	ledsOff(0, 1, 0); 
	ledsOff(0, 0, 0);
	ledsOff(3, 1, 0); 
	ledsOff(3, 1, 0); 
	ledsOff(3, 1, 0);
	ledsOff(1, 0, 0); 
	ledsOff(1, 0, 0); 
	ledsOff(1, 0, 0);
	
	ledsOn(6, 2, tempCol); 
	ledsOn(4, 2, tempCol); 
	ledsOn(2, 2, tempCol);
	ledsOn(6, 1, tempCol); 
	ledsOn(4, 1, tempCol); 
	ledsOn(2, 1, tempCol);
	ledsOn(6, 0, tempCol); 
	ledsOn(4, 0, tempCol); 
	ledsOn(2, 0, tempCol);
	delay(atraso);
	ledsOff(6, 2, 0); 
	ledsOff(4, 2, 0); 
	ledsOff(2, 2, 0);
	ledsOff(6, 1, 0); 
	ledsOff(4, 1, 0); 
	ledsOff(2, 1, 0);
	ledsOff(6, 0, 0); 
	ledsOff(4, 0, 0); 
	ledsOff(3, 0, 0);
	
	ledsOn(7, 2, tempCol); 
	ledsOn(7, 1, tempCol); 
	ledsOn(7, 0, tempCol);
	ledsOn(5, 0, tempCol); 
	ledsOn(5, 1, tempCol); 
	ledsOn(5, 2, tempCol);
	ledsOn(8, 2, tempCol); 
	ledsOn(8, 1, tempCol); 
	ledsOn(8, 0, tempCol);
	delay(atraso);
	ledsOff(7, 2, 0); 
	ledsOff(7, 1, 0); 
	ledsOff(7, 0, 0);
	ledsOff(5, 0, 0); 
	ledsOff(5, 1, 0); 
	ledsOff(5, 2, 0);
	ledsOff(8, 2, 0); 
	ledsOff(8, 1, 0); 
	ledsOff(8, 0, 0);
}
void niveis(int tempNiv, int atraso) {

	/* Parametro niveis:
	int tempNiv: define aprecisão em que a função ledsOn liga os leds, quanto maior o tempo mais lenta fica.
	int atraso: define o tempo em que o proximo bloco será exeutado.
	*/
	
	ledsOn(0, 0, tempNiv);
	ledsOn(1, 0, tempNiv);
	ledsOn(2, 0, tempNiv);
	ledsOn(3, 0, tempNiv);
	ledsOn(4, 0, tempNiv);
	ledsOn(5, 0, tempNiv);
	ledsOn(6, 0, tempNiv);
	ledsOn(7, 0, tempNiv);
	ledsOn(8, 0, tempNiv);
	delay(atraso);
	ledsOff(0, 0, 0);
	ledsOff(1, 0, 0);
	ledsOff(2, 0, 0);
	ledsOff(3, 0, 0);
	ledsOff(4, 0, 0);
	ledsOff(5, 0, 0);
	ledsOff(6, 0, 0);
	ledsOff(7, 0, 0);
	ledsOff(8, 0, 0);
	
	ledsOn(0, 1, tempNiv);
	ledsOn(1, 1, tempNiv);
	ledsOn(2, 1, tempNiv);
	ledsOn(3, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(5, 1, tempNiv);
	ledsOn(6, 1, tempNiv);
	ledsOn(7, 1, tempNiv);
	ledsOn(8, 1, tempNiv);
	delay(atraso);
	ledsOff(0, 1, 0);
	ledsOff(1, 1, 0);
	ledsOff(2, 1, 0);
	ledsOff(3, 1, 0);
	ledsOff(4, 1, 0);
	ledsOff(5, 1, 0);
	ledsOff(6, 1, 0);
	ledsOff(7, 1, 0);
	ledsOff(8, 1, 0);

	ledsOn(0, 2, tempNiv);
	ledsOn(1, 2, tempNiv);
	ledsOn(2, 2, tempNiv);
	ledsOn(3, 2, tempNiv);
	ledsOn(4, 2, tempNiv);
	ledsOn(5, 2, tempNiv);
	ledsOn(6, 2, tempNiv);
	ledsOn(7, 2, tempNiv);
	ledsOn(8, 2, tempNiv);
	delay(atraso);
	ledsOff(0, 2, 0);
	ledsOff(1, 2, 0);
	ledsOff(2, 2, 0);
	ledsOff(3, 2, 0);
	ledsOff(4, 2, 0);
	ledsOff(5, 2, 0);
	ledsOff(6, 2, 0);
	ledsOff(7, 2, 0);
	ledsOff(8, 2, 0);

	ledsOffAll(atraso);

	ledsOn(0, 2, tempNiv);
	ledsOn(1, 2, tempNiv);
	ledsOn(2, 2, tempNiv);
	ledsOn(3, 2, tempNiv);
	ledsOn(4, 2, tempNiv);
	ledsOn(5, 2, tempNiv);
	ledsOn(6, 2, tempNiv);
	ledsOn(7, 2, tempNiv);
	ledsOn(8, 2, tempNiv);
	delay(atraso);
	ledsOff(0, 2, 0);
	ledsOff(1, 2, 0);
	ledsOff(2, 2, 0);
	ledsOff(3, 2, 0);
	ledsOff(4, 2, 0);
	ledsOff(5, 2, 0);
	ledsOff(6, 2, 0);
	ledsOff(7, 2, 0);
	ledsOff(8, 2, 0);

	ledsOn(0, 1, tempNiv);
	ledsOn(1, 1, tempNiv);
	ledsOn(2, 1, tempNiv);
	ledsOn(3, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(5, 1, tempNiv);
	ledsOn(6, 1, tempNiv);
	ledsOn(7, 1, tempNiv);
	ledsOn(8, 1, tempNiv);
	delay(atraso);
	ledsOff(0, 1, 0);
	ledsOff(1, 1, 0);
	ledsOff(2, 1, 0);
	ledsOff(3, 1, 0);
	ledsOff(4, 1, 0);
	ledsOff(5, 1, 0);
	ledsOff(6, 1, 0);
	ledsOff(7, 1, 0);
	ledsOff(8, 1, 0);

	ledsOn(0, 0, tempNiv);
	ledsOn(1, 0, tempNiv);
	ledsOn(2, 0, tempNiv);
	ledsOn(3, 0, tempNiv);
	ledsOn(4, 0, tempNiv);
	ledsOn(5, 0, tempNiv);
	ledsOn(6, 0, tempNiv);
	ledsOn(7, 0, tempNiv);
	ledsOn(8, 0, tempNiv);
	delay(atraso);
	ledsOff(0, 0, 0);
	ledsOff(1, 0, 0);
	ledsOff(2, 0, 0);
	ledsOff(3, 0, 0);
	ledsOff(4, 0, 0);
	ledsOff(5, 0, 0);
	ledsOff(6, 0, 0);
	ledsOff(7, 0, 0);
	ledsOff(8, 0, 0);

	ledsOn(0, 0, tempNiv);
	ledsOn(1, 0, tempNiv);
	ledsOn(2, 0, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(3, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(5, 1, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(6, 2, tempNiv);
	ledsOn(7, 2, tempNiv);
	ledsOn(8, 2, tempNiv);
	delay(atraso);
	ledsOffAll(1);

	ledsOn(6, 0, tempNiv);
	ledsOn(3, 0, tempNiv);
	ledsOn(0, 0, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(7, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(1, 1, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(8, 2, tempNiv);
	ledsOn(5, 2, tempNiv);
	ledsOn(2, 2, tempNiv);
	delay(atraso);
	ledsOffAll(1);

	ledsOn(8, 0, tempNiv);
	ledsOn(5, 0, tempNiv);
	ledsOn(2, 0, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(7, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(1, 1, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(6, 2, tempNiv);
	ledsOn(3, 2, tempNiv);
	ledsOn(0, 2, tempNiv);
	delay(atraso);
	ledsOffAll(1);

	ledsOn(6, 0, tempNiv);
	ledsOn(3, 0, tempNiv);
	ledsOn(0, 0, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(7, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(1, 1, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(8, 2, tempNiv);
	ledsOn(5, 2, tempNiv);
	ledsOn(2, 2, tempNiv);
	delay(atraso);
	ledsOffAll(1);

	ledsOn(0, 0, tempNiv);
	ledsOn(1, 0, tempNiv);
	ledsOn(2, 0, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(3, 1, tempNiv);
	ledsOn(4, 1, tempNiv);
	ledsOn(5, 1, tempNiv);
	delay(atraso);
	ledsOffAll(1);
	ledsOn(6, 2, tempNiv);
	ledsOn(7, 2, tempNiv);
	ledsOn(8, 2, tempNiv);
	delay(atraso);
	ledsOffAll(1);
}	
void aleatorio(int tempAleat, int contAle) {

	/* Paramentro aleatorio:
	int tempAleat: define o tempo em milisegundos em que a função permanecerá ligada.
	int contAle: define o numero de piscadas aleatorias.
	*/

	int colAleat, levAleat;
	for(int i = 0; i < contAle; i ++){
		colAleat = random(9);
		levAleat = random(3);
		ledsOn(colAleat, levAleat, tempAleat);
		ledsOff(colAleat, levAleat, 0);
	}
}
void setaUp(int valorVelocidade, int valorRepete) {

	/* Parametros setaUp:
	int valorVelocidade: define o valor em que começará a sequencia até subtraida a cada laço por 1/10 de valor.
	int valorRepete: define a quantidade de vezes que a sequencia será executada.
	*/

	int velocidade = valorVelocidade ;
	for(int i = 0; i < valorRepete; i++){
		
		for(int c = 0; c < 9; c ++){
			velocidade -= valorVelocidade / 10;
			for(int n = 0; n < 3 ; n ++){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}
		for(int c = 8; c >= 0; c --){
			velocidade += valorVelocidade / 10;
			for(int n = 2; n >= 0 ; n --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}
	}
}
void setaSide(int valorVelocidade, int valorRepete) {

	/* Parametros setaSide:
	int valorVelocidade: define o valor em que começará a sequencia até subtraida a cada laço por 1/10 de valor.
	int valorRepete: define a quantidade de vezes que a sequencia será executada.
	*/

	int velocidade = valorVelocidade;
	for(int i = 0; i < valorRepete; i++){
		for(int n = 0; n < 3; n ++){
			velocidade -= valorVelocidade / 10;
			for(int c = 0; c < 9 ; c ++){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}
		for(int n = 2; n >= 0; n --){
			velocidade += valorVelocidade / 10;
			for(int c = 8; c >= 0 ; c --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}
	}
}
void caos(int velCaosOn, int tempCaos) {

	/*Parametros caos:
	velCaosOn: define a velocidades das piscadas.
	tempCaos: define quanto tempo a função ficará ligada.	
	*/

	static int x, y;
	int casoA1[9];
	int casoA2[3];
	int casoB1[9];
	int casoB2[3];
	int casoC1[9];
	int casoC2[3];

	for(int i = 0; i < tempCaos; i ++){

	    for(int i = 0; i < 9; i++){
			x = random(0, 9);
			casoA1[i] = x ;
		
			for(int i = 0; i < 3; i ++){
				y = random(0, 3);
			    casoA2[i] = y ;    
			}
		}
	
		for(int i = 0; i < 9; i++){
			x = random(0, 9);
			casoB1[i] = x ; 
			
			for(int i = 0; i < 3; i ++){
				y = random(0, 3);
			    casoB2[i] = y ;    
			}
		}

		for(int i = 0; i < 9; i++){
			x = random(0, 9);
			casoC1[i] = x ; 
			
			for(int i = 0; i < 3; i ++){
				y = random(0, 3);
			    casoC2[i] = y ;    
			}
		}
	
		for(int c = 0; c < 9; c ++){

			for(int n = 0; n < 3; n ++){
	    		
	    		ledsOn(casoA1[c],casoA2[n], velCaosOn);
	    		ledsOffAll(1);
	    		ledsOn(casoB1[c], casoB2[n], velCaosOn);
	    		//ledsOffAll(1);
	    		ledsOn(casoC1[c],casoA2[n], velCaosOn);
	    		ledsOffAll(1);
	    	}     	
		}		
	}
}
void bandeijaInclinada(int tempNiv, int tempLaco) {

	/*Parametros bandeijaInclinada:
	int tempNiv: define a velocidade em que o led pisca, o valor ideal é 1.
	tempLaco: define quantas voltas o laço executara os comandos, estabelecento um certo tempo, quanto maior o 
	número, mais lento fica.		
	*/

	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}

	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco; i ++){
	 	ledsOn(8, 0, tempNiv);
		ledsOn(5, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(3, 2, tempNiv);
		ledsOn(0, 2, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){
	    
	    ledsOn(0, 2, tempNiv);
		ledsOn(1, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 0, tempNiv);
		ledsOn(7, 0, tempNiv);
		ledsOn(8, 0, tempNiv);
		ledsOffAll(1);
	}
	for(int i = 0; i < tempLaco ; i ++){

		ledsOn(6, 0, tempNiv);
		ledsOn(3, 0, tempNiv);
		ledsOn(0, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(7, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(1, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(8, 2, tempNiv);
		ledsOn(5, 2, tempNiv);
		ledsOn(2, 2, tempNiv);
		ledsOffAll(1);
	}	
	for(int i = 0; i < tempLaco; i ++){
	    
		ledsOn(0, 0, tempNiv);
		ledsOn(1, 0, tempNiv);
		ledsOn(2, 0, tempNiv);
		ledsOffAll(1);
		ledsOn(3, 1, tempNiv);
		ledsOn(4, 1, tempNiv);
		ledsOn(5, 1, tempNiv);
		ledsOffAll(1);
		ledsOn(6, 2, tempNiv);
		ledsOn(7, 2, tempNiv);
		ledsOn(8, 2, tempNiv);
		ledsOffAll(1);
	}
}
void box(int tempBox, int lacoBox){

	/*Parametros box:
	tempBox: define o tempo em que os leds permaneceram ligados, o valor ideal é 1(um).
	lacoBox: define a duração da função em laços.
	*/

	for(int i = 0; i < lacoBox; i ++){
		    
		ledsOn(0, 0, tempBox);
		ledsOn(1, 0, tempBox);
		ledsOn(2, 0, tempBox);
		ledsOn(3, 0, tempBox);
		ledsOn(5, 0, tempBox);
		ledsOn(6, 0, tempBox);
		ledsOn(7, 0, tempBox);
		ledsOn(8, 0, tempBox);
		ledsOffAll(1);

		ledsOn(0, 1, tempBox);
		ledsOn(2, 1, tempBox);
		ledsOn(6, 1, tempBox);
		ledsOn(8, 1, tempBox);
		ledsOffAll(1);

		ledsOn(8, 2, tempBox);
		ledsOn(7, 2, tempBox);
		ledsOn(6, 2, tempBox);
		ledsOn(5, 2, tempBox);
		ledsOn(3, 2, tempBox);
		ledsOn(2, 2, tempBox);
		ledsOn(1, 2, tempBox);
		ledsOn(0, 2, tempBox);
		ledsOffAll(0);
		
		ledsOn(8, 0, tempBox);
		ledsOn(7, 0, tempBox);
		ledsOn(6, 0, tempBox);
		ledsOn(5, 0, tempBox);
		ledsOn(3, 0, tempBox);
		ledsOn(2, 0, tempBox);
		ledsOn(1, 0, tempBox);
		ledsOn(0, 0, tempBox);
		ledsOffAll(0);

		ledsOn(8, 1, tempBox);
		ledsOn(6, 1, tempBox);
		ledsOn(2, 1, tempBox);
		ledsOn(0, 1, tempBox);
		ledsOffAll(0);

		ledsOn(0, 2, tempBox);
		ledsOn(1, 2, tempBox);
		ledsOn(2, 2, tempBox);
		ledsOn(3, 2, tempBox);
		ledsOn(5, 2, tempBox);
		ledsOn(6, 2, tempBox);
		ledsOn(7, 2, tempBox);
		ledsOn(8, 2, tempBox);
		ledsOffAll(0);
	}
}
void setaUpMaissetaSide(int valorVelocidade, int valorRepete) {

	/* Parametros setaUpMaissetaSide:
	int valorVelocidade: define o valor em que começará a sequencia, subtraida a cada laço por 1/10 de valor.
	int valorRepete: define a quantidade de vezes que a sequencia será executada.
	*/

	int velocidade = valorVelocidade;
	for(int i = 0; i < valorRepete; i++){

		for(int c = 0; c < 9; c ++){
			velocidade -= valorVelocidade / 10;
			for(int n = 0; n < 3 ; n ++){
			    ledsOn(c, n, velocidade);
			    ledsOff(c, n, 0);	
			}  
		}

		for(int c = 8; c >= 0; c --){
			velocidade += valorVelocidade / 10;
			for(int n = 2; n >= 0 ; n --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}

		for(int n = 0; n < 3; n ++){
			velocidade -= valorVelocidade / 10;
			for(int c = 0; c < 9 ; c ++){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}

		for(int n = 2; n >= 0; n --){
			velocidade += valorVelocidade / 10;
			for(int c = 8; c >= 0 ; c --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}

		for(int c = 8; c >= 0; c --){
			velocidade += valorVelocidade / 10;
			for(int n = 2; n >= 0 ; n --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}

		for(int c = 0; c < 9; c ++){
			velocidade -= valorVelocidade / 10;
			for(int n = 0; n < 3 ; n ++){
			    ledsOn(c, n, velocidade);
			    ledsOff(c, n, 0);	
			}  
		}

		for(int n = 2; n >= 0; n --){
			velocidade += valorVelocidade / 10;
			for(int c = 8; c >= 0 ; c --){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}

		for(int n = 0; n < 3; n ++){
			velocidade -= valorVelocidade / 10;
			for(int c = 0; c < 9 ; c ++){
			    ledsOn(c, n, velocidade);
		    	ledsOff(c, n, 0);
			}  
		}
	}
}
void sideral(int repetir, int veloLed){

	/*Parametros sideral:
	int repetir: define quantas vezes a função vai se repetir.
	int veloLed: define a velocidade que a função pisca.	
	*/
	
	int xy[3][3];
	int yx[3][3];

	for(int r = 0; r < repetir; r ++){

		for(int x = 0; x < 3; x ++){
			for(int y = 0; y < 3 ; y ++){
			  
			  xy[x][y] = x + (y * 3);
			}	
		}

		for(int z = 0; z < 3; z ++){
		    ledsOffAll(1);
			for(int x = 0; x < 3; x ++){
				for(int y = 0; y < 3; y ++){

					ledsOn(xy[x][y], z, veloLed); 
				}   
			}
		}

		for(int z = 3; z >= 0 ; z --){
			ledsOffAll(1);
			for(int x = 0; x < 3; x ++){
				for(int y = 0; y < 3; y ++){

					ledsOn(xy[x][y], z, veloLed); 
				}   
		    }
		}	

		for(int y = 0; y < 3; y ++){
			for(int x = 0; x < 3 ; x ++){
			  
			  yx[y][x] = x + (y * 3);
			}	
		}	
	
		for(int z = 0; z < 3; z ++){
		    ledsOffAll(1);
			for(int y = 0; y < 3; y ++){
				for(int x = 0; x < 3; x ++){

					ledsOn(yx[y][x], z, veloLed); 
				}   
			}
		}

		for(int z = 3; z >= 0; z --){
		    ledsOffAll(1);
			for(int y = 0; y < 3; y ++){
				for(int x = 0; x < 3; x ++){

					ledsOn(yx[y][x], z, veloLed); 
				}   
			}
		}

		for(int x = 0; x < 3; x ++){
			for(int y = 0; y < 3 ; y ++){
			  
			  xy[x][y] = x + (y * 3);
			}	
		}

		for(int z = 0; z < 3; z ++){
		    
			for(int x = 0; x < 3; x ++){
				for(int y = 0; y < 3; y ++){

					ledsOn(xy[x][y], z, veloLed);
					ledsOffAll(1); 
				}   
			}
		}	

		for(int y = 0; y < 3; y ++){
			for(int x = 0; x < 3 ; x ++){
			  
			  yx[y][x] = x + (y * 3);
			}	
		}	
	
		for(int z = 0; z < 3; z ++){
		    
			for(int y = 0; y < 3; y ++){
				for(int x = 0; x < 3; x ++){

					ledsOn(yx[y][x], z, veloLed);
					ledsOffAll(1); 
				}   
			}
		}

		for(int x = 0; x < 3; x ++){
			for(int y = 0; y < 3 ; y ++){
			  
			  xy[x][y] = x + (y * 3);
			}	
		}

		for(int z = 0; z < 3; z ++){
		    
			for(int x = 0; x < 3; x ++){
				for(int y = 0; y < 3; y ++){

					ledsOn(xy[x][y], z, veloLed);
					ledsOffAll(1); 
				}   
			}
		}	

		for(int y = 0; y < 3; y ++){
			for(int x = 0; x < 3 ; x ++){
			  
			  yx[y][x] = x + (y * 3);
			}	
		}	
	
		for(int z = 0; z < 3; z ++){
		    
			for(int y = 0; y < 3; y ++){
				for(int x = 0; x < 3; x ++){

					ledsOn(yx[y][x], z, veloLed);
					ledsOffAll(1); 
				}   
			}
		}	
	}
}

void loop() {
	giro(3, 20);
	colunas(10, 10);
	niveis(10, 10);
	aleatorio(10, 700);
	setaUp(20, 5);
	setaSide(20, 5);
	caos(10, 20);
	bandeijaInclinada(1, 20);
	box(1, 200);
	setaUpMaissetaSide(10, 5);
	sideral(3, 15);
}




/home/fernando/Documentos/ARQUIVOS MINT 20/Documents/PlatformIO/Projects/Cubo_led