#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int vetor,num[10], resultado, maiorNumero,menorNumero,somador;	
	
while (vetor <= 9){
	cout << "Escolha o numero " << vetor << endl;
	cin >>num[vetor];
	vetor ++;
}

maiorNumero = num[0];
menorNumero = num[0];
cout << "Mostrar numero \n";
for (int i=0; i <= 9; i++){
	if (maiorNumero > num[i]) {
		maiorNumero = num[i];
	} 
	if (menorNumero < num[i]){
		maiorNumero = num[i];
}
	 
}


for (int i=0; i <=9; i++){

	
	somador += num[i]; 
	
}
int media = somador / 10;


cout << "Média dos numeros : " << media << "\n";
cout << "Maior numero : " << menorNumero << "\n";
cout << "Menor Numero : " << maiorNumero;	
	return 0;
}
