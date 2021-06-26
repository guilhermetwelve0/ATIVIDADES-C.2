#include<iostream>
float quad(float v){
	return v*v;
}
float ret (float v, float a){
	return v*a;
}
float circ (float v, float pi){
	 return v*v*pi;
}
float tri (float a, float v){
	return a*v/2;
}
int main(){
	int e;
	inicio:
	std::cout << "Digite 1 para calcular a area do quadrado\nDigite 2 para calcular a area do Retangulo\nDigite 3 para calcular a area do Circulo\nDigite 4 para calcular a area do Triangulo\n";
	std::cin >> e;
	if(e==1){
		std::cout << "Digite o valor dos lados do quadrado:";
		float v;
		std::cin >> v;
		std::cout << "A area do quadrado e: " << quad(v) << "!\n";
	}
	else if(e==2){
		std::cout << "Digite o valor da base do retangulo:";
		float v;
		std::cin >> v;
		std::cout << "Digite o valor da altura do retangulo:";
		float a;
		std::cin >> a;
		std::cout << "A area do retangulo e: " << ret(v,a) << "!\n";
	}
	else if(e==3){
		std::cout << "O valor de PI e 3,14\n";
		std::cout << "Digite o valor do raio do circulo:";
		int v;
		std::cin >> v;
		float pi = 3.14;
		std::cout << "A area do circulo e: " << circ(v,pi) << "!\n";
	}
	else if(e==4){
		std::cout << "Digite o valor da base do triangulo:";
		float v;
		std::cin >> v;
		std::cout << "Digite o valor da altura do triangulo:";
		float a;
		std::cin >> a;
		std::cout << "A area do triangulo e: " << tri(a,v) << "!\n";
	}
	else{
		system("cls");
		std::cout << "Essa opcao nao existe!\nDigite um numero entre 1 e 4!\n";
		goto inicio;
	}
	return 0;
}