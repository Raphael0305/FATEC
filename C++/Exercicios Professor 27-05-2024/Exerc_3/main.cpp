#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
setlocale (LC_ALL, "portuguese");

int numero[5],vetor,contador = 0, posicao=0, posicaoMenor=0;


while (vetor <= 4){
	cout << "Escolha um numero " << vetor << endl;
	cin >> numero[vetor];
	vetor ++;
}


int maiorNumero = numero[0];
int menorNumero = numero[0];

for (int i=0; i <=4; i++){
		if(maiorNumero < numero[i]){
			posicao++;
			maiorNumero = numero[i];
		}
		if (menorNumero > numero[i]){
			for(int i=0; i<=4; i++){
			posicaoMenor++;
			menorNumero = numero [i];
			}
			
		}
	
 }
 if (posicaoMenor > 0){
 	 posicaoMenor -= 1;
 }

 cout << "o maior Numero é : " << maiorNumero << ", e a sua pisição é de : " << posicao << " no vetor \n";
 cout << "\n";
 cout << "o menor Numero é : " << menorNumero << ", e a sua pisição é de : " << posicaoMenor << " no vetor \n";
 
 	return 0;
}



