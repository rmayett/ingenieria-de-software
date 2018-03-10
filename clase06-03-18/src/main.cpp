#include "Main.h"
template <class Gn>
Gn *RestaFnApGn(Gn AEn,Gn BEn){
	Gn *pApEn=new Gn;
	*pApEn=AEn-BEn;
	return pApEn;
}
template <class Gn>
Gn *MultiFnApGn(Gn AEn,Gn BEn){
	Gn *pApEn=new Gn;
	*pApEn=AEn*BEn;
	return pApEn;
}
template <class Gn>
Gn *DivFnApGn(Gn AEn,Gn BEn){
	Gn *pApEn=new Gn;
	*pApEn=AEn/BEn;
	return pApEn;
}
template <class Gn>
struct EsFns{
	Gn *(*ApFnApGn)(Gn,Gn);
	Gn AGn; 
	Gn BGn; 
	Gn RdoGn; 
};
template <class Gn>
Gn*SumaFnApGn(Gn AGn, Gn BGn){
	Gn* pApGn=new Gn;
	*pApGn=AGn+BGn;
	return pApGn;
}
template <class Gn>
EsFns<Gn> *(*CreaFnApArApEsFns(void))[4]{
	EsFns<Gn> *(*pApArApEsFns)[4]= (EsFns<Gn>*(*)[4]) new (EsFns<Gn>*[4]); 
	for (int i = 0; i < 4; i++)
	{
		(*pApArApEsFns)[i] = new EsFns<Gn>;		
	}
	(*pApArApEsFns)[0]->ApFnApGn = SumaFnApGn;
	(*pApArApEsFns)[1]->ApFnApGn = RestaFnApGn;
	(*pApArApEsFns)[2]->ApFnApGn = MultiFnApGn;
	(*pApArApEsFns)[3]->ApFnApGn = DivFnApGn;
	Gn AGn,BGn;
	std::cout<<"ingresa dos datos"<<std::endl;
	std::cin>>AGn>>BGn;
	for (int i = 0; i < 4; ++i)
	{		
		(*pApArApEsFns)[i]->AGn=AGn;
		(*pApArApEsFns)[i]->BGn=BGn;	
		(*pApArApEsFns)[i]->RdoGn=*(*(*pApArApEsFns)[i]->ApFnApGn)(AGn,BGn);
	}	
	return pApArApEsFns;
}

int main(int argc, char const *argv[])
{
	int AEn=5,BEn=7;
	std::cout<<*SumaFnApGn<int>(AEn,BEn)<<std::endl;
	float ARe=5.5,BRe=7.2;
	std::cout<<*SumaFnApGn<float>(ARe,BRe)<<std::endl;
	double ADb=3.77777777,BDb=8.532140766;
	std::cout<<*SumaFnApGn<double>(ADb,BDb)<<std::endl;
	EsFns<float> *(*pApArApEsFns)[4]=CreaFnApArApEsFns<float>();
	for (int i = 0; i < 4; i++)
	{
		std::cout<<(*pApArApEsFns)[i]->AGn<<" "<<(*pApArApEsFns)[i]->BGn<<"="<<(*pApArApEsFns)[i]->RdoGn<<std::endl;
	}
	return 0;
}