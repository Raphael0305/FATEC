#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");

    int numero[10], vetor;
    int valorIgual;
    
   
    while (vetor < 10) {
        cout << "Escolha um n�mero " << vetor << "\n";
        cin >> numero[vetor];
        vetor++;
    }

	/*
	for (int i = 0; i < 10; i++){

		for(int t = 1 + 1; t < 10; t++){
			
			if (numero[i] == numero[t]){
					
			cout << "\n";	
            cout << "O numero repetido �:  " << numero[t];	
			cout << "\n";	
			
			}
		} 	
	}
	*/

   
    for (int i = 0; i < 10; i++) {
        for (int t = i + 1; t < 10; t++) {
            if (numero[i] == numero[t]) {
            
			cout << "\n";	
            cout << "O numero repetido �:  " << numero[t];	
			cout << "\n";
			
			}
		}
	}

	
	
	
	return 0;
}
