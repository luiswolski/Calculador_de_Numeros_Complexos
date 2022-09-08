#ifndef COMPLEXO_H
#define COMPLEXO_H
#include<string>

class Complexo{
	public:
//CONSTRUTOR E DESTRUTOR
		Val (float real_a, float real_b, float img_a, float img_b);
		~Complexo();
		
		float adicao_r();
		float adicao_i();
		float subtracao_r();
		float subtracao_i();
		float multiplicacao_r();
		float multiplicacao_i();
		float divisao_r();
		float divisao_i();
		
	
	private:
		float real_a;
		float real_b;
		float img_a;
		float img_b;
		
};
#endif
