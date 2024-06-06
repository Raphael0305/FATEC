#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

setlocale (LC_ALL, "portuguese");

int numeros[10], quant, marcador=0;
int somador;

while (quant <= 9){
	cout << "escolha um numero " << quant << endl;
	cin >> numeros [quant];
	quant ++;
}


cout << "mostrar numeros \n";
for (int i=0; i <=9; i++){
		if (numeros[i] < 0){
		marcador++;
     	}else {
     	  somador += numeros[i];
		 }
	}
cout << " \n";
cout << "Quantidade  negativos"<< marcador << endl;
cout << "Soma dos positivos "<< somador << endl;


//for (int i=0; i <= 9; i++){
//	cout << "Escolha o numero \n";
//	cin >> numeros[i];
//}






	return 0;
}
