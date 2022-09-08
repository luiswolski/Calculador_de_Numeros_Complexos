#include <iostream>
#include "Complexo.h"
using namespace std;

//ARMAZENA AS ENTRADAS NO PRIVATE
Complexo::Val (float real_a, float real_b, float img_a, float img_b){
	this->real_a = real_a;
	this->real_b = real_b;
	this->img_a = img_a;
	this->img_b = img_b;
}


//FUNCOES PARA GERAR AS 4 SAINDA ARITIMETICAS
//FUNCAO DE ADICAO
float Complexo::adicao_r(){
	float soma_real;

	soma_real = this->real_a + this->real_b;
		
		return soma_real;	
}

float Complexo::adicao_i(){
	float soma_img;
	
	soma_img = this->img_a + this->img_b;
	
	return soma_img;
}


//FUNCAO DE SUBTRACAO
float Complexo::subtracao_r(){
	float sub_real;
	
	sub_real = this->real_a - this->real_b;
	
	return sub_real;
}

float Complexo::subtracao_i(){
	float sub_img;

	sub_img = this->img_a - this->img_b;
	
	return sub_img;
}
	
	
//FUNCAO DE MULTIPLICACAO
float Complexo::multiplicacao_r(){
	float mult_real;
	
	mult_real = (this->real_a * this->real_b) - (this->img_a * this->img_b);
		
	return mult_real;
}

float Complexo::multiplicacao_i(){
	float mult_img;
	
	mult_img = (this->real_a * this->img_b) + (this->real_b * this->img_a);
	
	return mult_img;
}


//FUNCAO DE DIVISAO
float Complexo::divisao_r(){
	float div_real, denom;
	
	denom = (this->real_b * this->real_b) + (this->img_b * this->img_b );
	div_real = ((this->real_a * this->real_b) + (this->img_a * this->img_b))/denom;
	
		if (denom == 0){
			return false;
		}else{
			return div_real;
		}
}

float Complexo::divisao_i(){
	float div_img, denom;
	
	denom = (this->real_b * this->real_b) + (this->img_b * this->img_b );
	div_img = ((this->img_a * this->real_b) - (this->real_a * this->img_b))/denom;
	
		if (denom == 0){
			return false;
		}else {
			
			return div_img;	
		}
}


// DESTRUIDOR
Complexo::~Complexo(){
		cout << "obj destruido"<<endl;
}
