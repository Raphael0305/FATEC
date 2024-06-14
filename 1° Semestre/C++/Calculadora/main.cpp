#include <iostream>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float soma (float nu1, float nu2);
float subtracao (float nu1, float nu2);
float multiplica (float nu1,float nu2);
float divide (float nu1, float nu2);
void serounaoser (int nu1);
void thanks();
	
 int main() {
setlocale(LC_ALL, "portuguese");
	float n1,n2;
	int op;
	char deseja;
	
	do{
		
	system ("cls");
	
		cout << "+======= Menu =======+ \n";
		cout << "| 1 - Soma           | \n";
		cout << "| 2 - Subtracao      | \n";
		cout << "| 3 - Multiplicacao  | \n";
		cout << "| 4 - Divisao        | \n";
		cout << "| 5 - Par/Impar      | \n";
		cout << "| 6 - Sair           | \n";
		cout << "+====================+ \n";
		cout << "Escolha uma opcao: ";
		cin >> op;
		
 		if(op > 6 ){
 			cout << "Esse numero não é valido aqui parça!\n";
 			cout << "\n Fazer outra conta (S/N)? \n";
			cin >> deseja;
		 }

	switch (op){
		case 1:
			cout << "\n";
			cout << "Informe o primeiro numero \n";
			cin >> n1;
			cout << "\n";
			cout << "Informe o segundo numero\n";
			cin >> n2;
			
			cout <<"\n";
			cout << "O resultado é de: "  << soma(n1,n2);
			cout << "\n";
			cout << "\n";
			cout << "\n";
			cout << "Fazer outra conta (S/N)? \n";
			cin >> deseja;
			break;
		case 2:
			
			cout << "\n";
			cout << "Informe o primeiro numero \n";
			cin >> n1;
			cout << "\n";
			cout << "Informe o segundo numero\n";
			cin >> n2;
	
			cout <<"\n";
			cout << "O resultado é de: "  << subtracao(n1,n2);
			cout << "\n";
			cout << "\n";
			
			cout << "Fazer outra conta (S/N)? \n";
			cin >> deseja;
			break;
		case 3:
			
		cout << "\n";
			cout << "Informe o primeiro numero \n";
			cin >> n1;
			cout << "\n";
			cout << "Informe o segundo numero\n";
			cin >> n2;
	
			cout <<"\n";
			cout << "O resultado é de: "  << multiplica(n1,n2);
			cout << "\n";
			cout << "\n";
			
			cout << "Fazer outra conta (S/N)? \n";
			cin >> deseja;
			break;
		case 4:
			cout << "\nQual numero você quer dividir? \n";
			cin >> n1;
			cout << "\n";
			cout << "Por qual outro numero ? \n";
			cin >> n2;
	
			cout <<"\n";
			cout << "O resultado é de: "  << divide(n1,n2);
			cout << "\n";
			cout << "\n";
			
			cout << "\nFazer outra conta (S/N)? \n";
			cin >> deseja;
			break;
		
		case 5:{
			
				cout << "\n";
				cout << "\nEscreva o numero que deseja saber se é par ou não\n";
				cin >> n1;
				cout << "\n";
				cout << "\n";	
				serounaoser (n1);
			
			break;
		}	
		case 6:
		cout << "\nFlw cachorrão(ona)!\n";
	}
		
	}while(deseja == 's' || deseja =='S');

thanks();
return 0;
}

//Função 

float soma (float nu1, float nu2){
	
	float result;
	
	result = nu1+nu2;
	
	
	return result;
}

float subtracao (float nu1, float nu2){
	float result;
	
	result = nu1-nu2;
	
	
	return result;
	
}

float multiplica (float nu1,float nu2){
	float result;
	
	
	result = nu1*nu2;
	
	return result;
}

float divide (float nu1, float nu2){
	float result;


result = nu1/nu2;

return result;
	
	
	
}

void serounaoser (int nu1){
	
	if(nu1 % 2 == 0){
		
		cout << "Esse numero é par!!!";
	}else {
		cout << "Esse numero é impar dog!!!";
	}	
}


void thanks(){
	cout << "Obrigado por usar!";

}


