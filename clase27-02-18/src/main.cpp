#include "Main.h"

struct EsDireccion{
	char CalleCd[12];
	int NroEn;
};
struct EsDatos{
	int EdadEn;
	float PesoRe;
	char NombreCd[12];
	EsDireccion LaDireccion;
}; /*es un tipo de datos  compuesto heterogeneo es decir cada componente
puede ser tipo diferente  */

void LeeDatosFn(EsDatos alfaArEsDatos[5]){
	for (int i = 0; i < 5; i++)
	{
		std::cout<<"Registro "<<i+1<<"\nEdad:"<<std::endl;
		std::cin>>alfaArEsDatos[i].EdadEn; 
		std::cout<<"Peso:"<<std::endl;
		std::cin>>alfaArEsDatos[i].PesoRe;
		std::cout<<"Ciudad:"<<std::endl;
		std::cin>>alfaArEsDatos[i].NombreCd;
		std::cout<<"Calle:"<<std::endl;
		std::cin>>alfaArEsDatos[i].LaDireccion.CalleCd;
		std::cout<<"Numero:"<<std::endl;
		std::cin>>alfaArEsDatos[i].LaDireccion.NroEn;

	}
}

void ExhibeDatosFn(EsDatos alfaArEsDatos[5]){
	std::cout<<"Datos"<<std::endl;
	for (int i = 0; i < 5; ++i)
	{
		std::cout<<"Edad: "<<alfaArEsDatos[i].EdadEn<<"\tPeso:"<<alfaArEsDatos[i].PesoRe<<"\tCiudad: "<<alfaArEsDatos[i].NombreCd<<"\nCalle: "<<alfaArEsDatos[i].LaDireccion.CalleCd<<"\tNumero: "<<alfaArEsDatos[i].LaDireccion.NroEn<<std::endl;	
	}
}
EsDatos (*CreaFnApArEsDAtos(void))[5]{
	EsDatos (*pApArEsdatos)[5] = (EsDatos(*)[5]) new (EsDatos[5]);
	LeeDatosFn((EsDatos *)pApArEsdatos);
	return pApArEsdatos; 
}
int main()
{
	/*EsDatos alfaArEsDatos[5];
	EsDatos LosEsDatos={15,27.5,"Romina",{"Juarez",123}};
	std::cout<<LosEsDatos.EdadEn<<" "<<LosEsDatos.PesoRe<<" "<<LosEsDatos.NombreCd<<std::endl;
	std::cout<<LosEsDatos.LaDireccion.CalleCd<<" "<<LosEsDatos.LaDireccion.NroEn<<std::endl;
	LeeDatosFn(alfaArEsDatos);
	ExhibeDatosFn(alfaArEsDatos);*/
	ExhibeDatosFn(*CreaFnApArEsDAtos());
	return 0;
}

