#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
//
using namespace std;
//
template <class Gn>
struct EsFns {
    Gn *(*pApFnApGn)(Gn, Gn);
    Gn AGn;
    Gn BGn;
    Gn RdoGn;
};
//
template <class Gn>
Gn *SumaFnApGn(Gn AGn, Gn BGn) {
    Gn *pApGn = new Gn;
    
    *pApGn = AGn + BGn;

    return pApGn;
}
// 
template <class Gn>
Gn *RestaFnApGn(Gn AGn, Gn BGn) {
    Gn *pApGn = new Gn;

    *pApGn = AGn - BGn;

    return pApGn;
}
//
template <class Gn>
Gn *ProductoFnApGn(Gn AGn, Gn BGn) {
    Gn *pApGn = new Gn;

    *pApGn = AGn * BGn;

    return pApGn;
}
//
template <class Gn>
Gn *DivisionFnApGn(Gn AGn, Gn BGn) {
    Gn *pApGn = new Gn;

    *pApGn = AGn / BGn;

    return pApGn;
}
//
template <class Gn>
void IngresaDatosFn(Gn &ARfGn, Gn &BRfGn) {
    puts("Ingresa dos valores enteros");
    cin >> ARfGn >> BRfGn;
}
//
template <class Gn>
EsFns<Gn> *(*CreaFnApArApEsFns(void))[4]{
    EsFns<Gn> *(*pApArApEsFns)[4] = (EsFns<Gn> *(*)[4])new (EsFns<Gn> *[4]);

    for(int iEn = 0; iEn < 4; iEn++)
        (*pApArApEsFns)[iEn] = new EsFns<Gn>;

    (*pApArApEsFns)[0]->pApFnApGn = SumaFnApGn;
    (*pApArApEsFns)[1]->pApFnApGn = RestaFnApGn;
    (*pApArApEsFns)[2]->pApFnApGn = ProductoFnApGn;
    (*pApArApEsFns)[3]->pApFnApGn = DivisionFnApGn;

    Gn AGn, BGn;
    
    IngresaDatosFn(AGn, BGn);
    (*pApArApEsFns)[0]->AGn = AGn;
    (*pApArApEsFns)[0]->BGn = BGn;
    (*pApArApEsFns)[0]->RdoGn = *(*(*pApArApEsFns)[0]->pApFnApGn)(AGn, BGn);

    IngresaDatosFn(AGn, BGn);
    (*pApArApEsFns)[1]->AGn = AGn;
    (*pApArApEsFns)[1]->BGn = BGn;
    (*pApArApEsFns)[1]->RdoGn = *(*(*pApArApEsFns)[1]->pApFnApGn)(AGn, BGn);
    
    IngresaDatosFn(AGn, BGn);
    (*pApArApEsFns)[2]->AGn = AGn;
    (*pApArApEsFns)[2]->BGn = BGn;
    (*pApArApEsFns)[2]->RdoGn = *(*(*pApArApEsFns)[2]->pApFnApGn)(AGn, BGn);

    IngresaDatosFn(AGn, BGn);
    (*pApArApEsFns)[3]->AGn = AGn;
    (*pApArApEsFns)[3]->BGn = BGn;
    (*pApArApEsFns)[3]->RdoGn = *(*(*pApArApEsFns)[3]->pApFnApGn)(AGn, BGn);
    
    system("cls");
    puts("\n");
    
    return pApArApEsFns;
}
//
template <class Gn>
void ExhibeFn(EsFns<Gn> *(*pApArApEsFns)[4]){
    char *LeyendaArApCd[4] = {"*->SumaFnApGn | ", "*->RestaFnApGn | ", "*->ProductoFnApGn | ", "*->DivisionFnApGn | "};
    
    cout << "+-----------------------------------------------------------------------+\n";
    cout << "| Descripcion general [contexto y motivacion]                           |\n";
    cout << "+-----------------------------------------------------------------------+\n";
    cout << "  La funcion CreaFnApArApEsFns produce p->Ar[4]->EsFns{pApFnApGn, OpdoAGn, OpdoBGn, RdoGn}\n";
    cout << "  Un campo para un apuntador a una funcion que devuelve un apuntador a un valor especificado\n";
    cout << "     La funcion puede ser SumaFnApGn, RestaFnApGn, ProductoFnApGn, DivisionFnApGn\n";
    cout << "  Tres campos del mismo tipo al especificado arriba:\n";
    cout << "     un campo para el primer operando\n";
    cout << "     un campo para el segundo operando\n";
    cout << "     un campo para el resultado de operar los operandos\n";
    cout << "  La siguiente figura muestra esta descripcion\n";
    puts("");
    cout << "                  EsFns    \n";
    cout << "              +-----------+\n";
    cout << "              | pApFnApGn |\n";
    cout << "              +-----------+\n";
    cout << "              |  OpdoAGn  |\n";
    cout << "              +-----------+\n";
    cout << "              |  OpdoBGn  |\n";
    cout << "              +-----------+\n";
    cout << "              |   RdoGn   |\n";
    cout << "              +-----------+\n";
    puts(""); 
    cout << "El programa usa plantillas para producir datos enteros, flotantes o dobles segun se requiera\n";
    puts("");
    cout << "+-----------------------------------------------------------------------+\n";
    cout << "| Entrada [especificacion precisa acerca de lo que se habla]            |\n";
    cout << "+-----------------------------------------------------------------------+\n";
    cout << "  Lectura de los operandos a ser operados (suma, resta, producto y division) por las funciones pertinentes\n";
    puts("");
    cout << "+-----------------------------------------------------------------------+\n";
    cout << "| Salida [exhibe, a menudo en forma grafica, hechos y resultados]       |\n";
    cout << "+-----------------------------------------------------------------------+\n";
    puts(""); 
    cout << "              +---+\n";
    cout << "pApArApEsFns->| * |->[ " << setw(20) << LeyendaArApCd[0] << setw(6) <<(*pApArApEsFns)[0]->AGn << " | " << setw(6) << (*pApArApEsFns)[0]->BGn << " | " << setw(6) <<(*pApArApEsFns)[0]->RdoGn << " ]" << endl;
        cout << "              +---+\n";;
    for(int iEn = 1; iEn < 4; iEn++){
        cout << "              | * |->[ " << setw(20) << LeyendaArApCd[iEn] << setw(6)<< (*pApArApEsFns)[iEn]->AGn << " | " << setw(6) << (*pApArApEsFns)[iEn]->BGn << " | " << setw(6) << (*pApArApEsFns)[iEn]->RdoGn << " ]" << endl;
        cout << "              +---+\n";
    }
}
//
main(void) {

    ExhibeFn(CreaFnApArApEsFns<int>());
    puts("\n");
    system("pause");
    
    ExhibeFn(CreaFnApArApEsFns<float>());
    puts("\n");
    system("pause");
    
    ExhibeFn(CreaFnApArApEsFns<double>());
    puts("\n");
    system("pause");
}
