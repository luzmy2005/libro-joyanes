#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double nmr1,nmr2,resultado;
    int operaciones ;

    cout<< "primer numero:" ;
    cin>>nmr1;

    cout<<"segundo numero:" ;
    cin>>nmr2;

    cout<<"**********operaciones**********" <<endl;
    cout<< "1.- suma" <<endl;
    cout<< "2.- resta" <<endl;
    cout<< "3.- multiplicacion" <<endl;
    cout<< "4.- divicion" <<endl;
    cout<< "5.- potencia" <<endl;
    cout<< "ingrese la operacion:" <<endl;

     cin>>operaciones;

    switch (operaciones)
    {
        case 1:
        resultado = nmr1+nmr2;
        cout<<"el resultado de la suma es: "<<resultado <<endl;
        break;

         case 2:
        resultado = nmr1-nmr2;
        cout<<"el resultado de la resta es: "<<resultado <<endl;
        break;

        case 3:
        resultado = nmr1*nmr2;
        cout<<"el resultado de la multiplicacion es: "<<resultado <<endl;
        break; 

         case 4:
        resultado = nmr1/nmr2;
        cout<<"el resultado de la divicion es: "<<resultado <<endl;
        break;


        
         case 5:
        resultado =pow( nmr1,nmr2);
        cout<<"el resultado de la potencia es: "<<resultado <<endl;
        break;
        
        default:
        cout<<"opcion no valida";
        }
        return 0;
        }
        