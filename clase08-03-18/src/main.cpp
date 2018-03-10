#include "Main.h"
/*muestra el menor si los 3 son iguales muestra los 3 si los dos menores son iguales muestras los dos*/
void BuscarMenor_de_3Fn(int AEn,int BEn,int CEn){
	int mayor,menor;
	if (AEn<BEn){
		if (AEn<CEn){
			std::cout<<"AEn="<<AEn<<std::endl;
		}
		else if (AEn==CEn){
			std::cout<<"AEn="<<AEn<<"CEn="<<CEn<<std::endl;
		}
		else{
			std::cout<<"CEn="<<CEn<<std::endl;
		}
	}
	else if(AEn==BEn){
		if (AEn<CEn){
			std::cout<<"AEn="<<AEn<<"BEn="<<BEn<<std::endl;			
		}
		else if (AEn==CEn){
			std::cout<<"AEn="<<AEn<<"BEn="<<BEn<<"CEn="<<CEn<<std::endl;
		}
		else{
			std::cout<<"CEn="<<CEn<<std::endl;			
		}
	}
	else{
		if (BEn<CEn){
			std::cout<<"BEn="<<BEn<<std::endl;	
		}
		else if (BEn==CEn){
			std::cout<<"BEn="<<BEn<<"CEn="<<CEn<<std::endl;			
		}
		else{
			std::cout<<"CEn="<<CEn<<std::endl;			
		}
	}
}

int main(int argc, char const *argv[])
{
	char op;
	int AEn,BEn,CEn;
	do{
		std::cout<<"Dame 3 Datos"<<std::endl;
		std::cin>>AEn>>BEn>>CEn;
		BuscarMenor_de_3Fn(AEn,BEn,CEn);
		std::cout<<"Otro ejemplo? s/n"<<std::endl;		
		std::cin>>op;
	}while((op!='n')&&(op!='N'));
	
	return 0;
}