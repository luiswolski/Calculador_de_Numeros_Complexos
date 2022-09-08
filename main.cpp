#include <iostream>
#include <cstdlib>
#include <math.h>
#define PI 3.14159265

using namespace std;

#include "Complexo.h"


int main(int argc, char** argv) {
	Complexo valor;
	float reala, realb, imaga, imagb;
	
cout << endl <<"OPERACOES ARITIMETICAS DE 2 NUMEROS COMPLEXOS"<<endl;

	cout << "DIGITE O VALO REAL DO PRIMEIRO NUMERO: ";
		cin >> reala;
	cout << "DIGITE O VALO IMAGINARIO DO PRIMEIRO NUMERO: ";
		cin >> imaga;
	cout << "DIGITE O VALO REAL DO SEGUNDO NUMERO: ";
		cin >> realb;
	cout << "DIGITE O VALO IMAGINARIO DO SEGUNDO NUMERO: ";
		cin >> imagb;
	
    valor.Val(reala, realb, imaga, imagb);




		if (valor.adicao_i()>=0){
			cout << "ADICAO: " << valor.adicao_r() <<"+"<< valor.adicao_i() << "i" <<endl;
		}else cout << "ADICAO: " <<valor.adicao_r() << valor.adicao_i() << "i" <<endl;
		cout << "FORMA TRIGONOMETRICA" <<endl;
		
			float sqrt_soma, p_soma, o_soma;
				p_soma = pow(valor.adicao_r(),2.0) + pow(valor.adicao_i(),2.0);
				sqrt_soma = sqrt(p_soma);
				o_soma = atan (valor.adicao_r()/valor.adicao_i()) * 180 / PI;
				
					cout <<"Z = " << sqrt_soma << " ( cos" << o_soma << " + isen" << o_soma << ")" <<endl;
			
				
				
		
		if (valor.subtracao_i()>=0){
			cout << "SUBTRACAO: " << valor.subtracao_r() <<"+"<< valor.subtracao_i() << "i" <<endl;
		}else cout << "SUBTRACAO: " <<valor.subtracao_r() << valor.subtracao_i() << "i" <<endl;
		cout << "FORMA TRIGONOMETRICA" <<endl;		
			float sqrt_sub, p_sub, o_sub;
				p_sub = pow(valor.subtracao_r(),2.0) + pow(valor.subtracao_i(),2.0);
				sqrt_sub = sqrt(p_sub);
				o_sub = atan (valor.subtracao_r()/valor.subtracao_i()) * 180 / PI;
				
					cout <<"Z = " << sqrt_sub << " ( cos" << o_sub << " + isen" << o_sub << ")" <<endl;
			
			
			
				
		if (valor.multiplicacao_i()>=0){
			cout << "MULTIPLICACAO: " << valor.multiplicacao_r() <<"+"<< valor.multiplicacao_i() << "i" <<endl;
		}else cout << "MULTIPLICACAO: " <<valor.multiplicacao_r() << valor.multiplicacao_i() << "i" <<endl;
		cout << "FORMA TRIGONOMETRICA" <<endl;		
			float sqrt_mult, p_mult, o_mult;
				p_mult = pow(valor.multiplicacao_r(),2.0) + pow(valor.multiplicacao_i(),2.0);
				sqrt_mult = sqrt(p_mult);
				o_mult = atan (valor.multiplicacao_r()/valor.multiplicacao_i()) * 180 / PI;
				
					cout <<"Z = " << sqrt_mult << " ( cos" << o_mult << " + isen" << o_mult << ")" <<endl;
			
				
				
				
		if(valor.divisao_i() == false){
			cout << "O VALOR PARA ESTA DIVISAO NAO EXISTE!" <<endl;
		}else
		 if (valor.divisao_i()>0){
			cout << "DIVISAO: " << valor.divisao_r() <<"+"<< valor.divisao_i() << "i" <<endl;
		}else cout << "DIVISAO: " <<valor.divisao_r() << valor.divisao_i() << "i" <<endl;
		cout << "FORMA TRIGONOMETRICA" <<endl;		
			float sqrt_div, p_div, o_div;
				p_div = pow(valor.divisao_r(),2.0) + pow(valor.divisao_i(),2.0);
				sqrt_div = sqrt(p_div);
				o_div = atan (valor.divisao_r()/valor.divisao_i() )* 180 / PI;
				
					cout <<"Z = " << sqrt_div << " ( cos" << o_div << " + isen" << o_div << ")" <<endl;
			
				
	return 0;
}
