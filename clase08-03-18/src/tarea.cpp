#include "Main.h"
/*muestra el menor si los 3 son iguales muestra los 3 si los dos menores son iguales muestras los dos*/
template <class Gn>
struct EsDatos
{
	Gn AGn,BGn,CGn;
};
template <class Gn>
void BuscarMenor_de_3Fn(EsDatos <Gn> pEsDatos){
	int mayor,menor;
	if (AGn<BGn){
		if (AGn<CGn){
			std::cout<<"AGn="<<AGn<<std::endl;
		}
		else if (AGn==CGn){
			std::cout<<"AGn="<<AGn<<"CGn="<<CGn<<std::endl;
		}
		else{
			std::cout<<"CGn="<<CGn<<std::endl;
		}
	}
	else if(AGn==BGn){
		if (AGn<CGn){
			std::cout<<"AGn="<<AGn<<"BGn="<<BGn<<std::endl;			
		}
		else if (AGn==CGn){
			std::cout<<"AGn="<<AGn<<"BGn="<<BGn<<"CGn="<<CGn<<std::endl;
		}
		else{
			std::cout<<"CGn="<<CGn<<std::endl;			
		}
	}
	else{
		if (BGn<CGn){
			std::cout<<"BGn="<<BGn<<std::endl;	
		}
		else if (BGn==CGn){
			std::cout<<"BGn="<<BGn<<"CGn="<<CGn<<std::endl;			
		}
		else{
			std::cout<<"CGn="<<CGn<<std::endl;			
		}
	}
}

int main(int argc, char const *argv[])
{
	char op;
	int AGn,BGn,CGn;
	do{
		std::cout<<"Dame 3 Datos"<<std::endl;
		std::cin>>AGn>>BGn>>CGn;
		BuscarMenor_de_3Fn(AGn,BGn,CGn);
		std::cout<<"Otro ejemplo? s/n"<<std::endl;		
		std::cin>>op;
	}while((op!='n')&&(op!='N'));
	
	return 0;
}