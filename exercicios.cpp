#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num1,num2,soma,subtracao,multi,div;
	//Leitura
	cout << "Digite o primeiro numero" <<endl;
	cin >> num1;
	cout << "Digite segundo numero "<<endl;
	cin >> num2;
	//Processamento
	soma = num1 + num2;
	subtracao = num1 - num2;
	multi = num1 * num2;
	div= num1/num2;
	//SAida
	cout << "A soma e: "<< soma<<endl;
	cout << "A subtracao e:" << subtracao<<endl;
	cout << "A Multiplicação e:" << multi<<endl;
	cout << "A divisao e:" << div<<endl; 
	
	return 0;
}


exercio 02:

#include <iostream>
#include <math.h>
using namespace std;
int main(){
	const double pi = 3.14;  
	double raio, area ;
	cout <<"informe o valor do raio e:"<< endl;
	cin >> raio;
	// processamento
	area = pi*(raio*raio);
	//saida
	cout <<" o valor da area e:"<< area <<endl;
	
	
	return 0;
}

exercicio 5.

#include <iostream>
#include <math.h>
using namespace std;
int main(){
	string nome;
	cout << "Escreva seu name :" <<endl;
	cin >>nome;
	cout << "Bem vindo," << nome<<"!";
	return 0;
}

exercicio 6.

#include <iostream>
#include <math.h>
using namespace std;
int soma (int a,int b){
	cout << "A soma é: " << a+b <<endl;
	return a+b;
}

int main(){
	int num1,num2;
	cout << "Digite um number :" <<endl;
	cin >> num1;
	cout << "Digite segundo number: " <<endl;
	cin >> num2;
	soma(num1,num2);
	
	
	return 0;
}
