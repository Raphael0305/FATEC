#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 setlocale(LC_ALL, "Portuguese");
	  char outra;
	  int acertos = 0, erros = 0, resultado;
	 do {
	
		system("cls");
	
	 char escolha;
	
	 
	cout << "Quiz sobre Baldurs Gate \n\n";
	
	cout << "Shadowheart é devota a qual Deusa:" << endl;
	
	cout << "A) Shar \n";
	cout << "B) Eilistrae \n";
	cout << "C) Bhall\n";
	cout << "D) Selune \n";
	
	cin >> escolha;
	

	
	if (escolha =='A' || escolha == 'a') {
		cout << "Acertou Miseravi!" << endl;
		acertos+=1;
	}else {
		cout << "Mas é claro que ta errado amigão!!! rsrs" << endl;
		erros+=1;
	}
	
		cout << "\n";
	//fim da segunda pergunta *

	cout << "Quem é o ''The Blade of Frontiers'':" << endl;
	
	cout << "A) Astarion \n";
	cout << "B) Wyll \n";
	cout << "C) Minsc \n";
	cout << "D) eleanor  \n";
	
	cin >> escolha;
	cout << "\n\n";

	
	if (escolha =='B' || escolha == 'b') {
		cout << "Acertou Miseravi!" << endl;
			acertos+=1;
	}else {
		cout << "Mas é claro que ta errado amigão!!!" << endl;
			erros+=1;
	}	
	
		cout << "\n";
    //fim da segunda perguta 
    
	//inicio da terceira
	cout << "A tia Ethel é na verdade uma: \n";
	
	cout << "A) Demonio \n";
	cout << "B) Espiã \n";
	cout << "C) Deusa \n";
	cout << "D) Bruxa  \n";
	
	cin >> escolha;
	
	if (escolha == 'D' || escolha == 'd') {
		cout << "Voce acertou!!" << endl;
			acertos+=1;
	}else {
		cout << "Ei Dog, Tu erro!" << endl;
			erros+=1;
	}
	
		cout << "\n";
	//fim da  terceira
	
	//inicio da Quarta
	cout << "Qual o nome da canção da Noite:\n";
	 
	cout << "A) Isobel \n";
	cout << "B) Aylin \n";
	cout << "C) Fayra \n";
	cout << "D) Katarin \n";
	
	cin >> escolha;
	
	if(escolha == 'B' || escolha == 'b') {
		cout << "isso isso isso" << endl;
			acertos+=1;
	}else {
		cout  << "Coé cara errou o nome dela dogão? que isso..." << endl;
			erros+=1;
	}
		cout << "\n";
   // fim da Quarta
   
   //inicio Quinta
	cout << "Quem transformou o Astarion ? \n";
	
	cout << "A) Cazador \n";
	cout << "B) Dracula \n";
	cout << "C) Coçada \n";
	cout << "D) Carnan \n";
	
	cin >> escolha;
	
	if (escolha == 'a' || escolha == 'A'){
		cout << "Você sabe muito meu mano!! Acertou !!" << endl;
			acertos+=1;
	}	else {
		cout << "Errou feio, Errou rude :(" << endl;
			erros+=1;
	}
	
		cout << "\n";
	 //fim quinta 
	 
	 
	cout << "FIM DO QUIZZ; \n";
	
	resultado = acertos - erros;
	
	cout <<  "voce acertou: " << resultado << "\n";
	
	
	
	cout << "deseja jogar novamente?? (S/N) \n";
	cin >> outra;
	
	 } while (outra == 'S' || outra == 's');
	return 0;
	
	
}
