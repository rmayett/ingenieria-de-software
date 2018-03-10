#include "Main.h"

void ValorBuscadoFn(int* pApEn,int ValorBuscadoEn){	
	int i=0;
	while(true){
		if (pApEn[i]<ValorBuscadoEn){
			i++;			
		}
		else if(pApEn[i]==ValorBuscadoEn){
			std::cout<<"xArEn["<<i<<"]"<<pApEn[i]<<std::endl;
			break;
		}
		else{
			std::cout<<"no esta :("<<std::endl;
				break;
		}
	}
}
int* LeeDatosFnApEn(int LonEn){
	int i;
	int* pApEn=new int[LonEn];
	std::cout<<"ingresa "<<LonEn<<"datos"<<std::endl;
	for (int i = 0; i < LonEn; i++)
	{
		std::cin>>pApEn[i];
	}
	return pApEn;
}
int main(int argc, char const *argv[])
{
	int val,tam;
	std::cout<<"Dame el Valor Buscado"<<std::endl;
	std::cin>>val;
	std::cout<<"Dame el tamaño del arreglo"<<std::endl;
	std::cin>>tam;
	ValorBuscadoFn(LeeDatosFnApEn(tam),val);
	return 0;
}