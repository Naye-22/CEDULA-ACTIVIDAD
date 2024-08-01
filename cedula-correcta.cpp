/*

*/
#include<iostream>
using namespace std;
bool CedulaCorrecta(int cedula[], int total)
{
    int sumapar= 0, sumaimpar = 0;
    for(int k=0; k<total-1; k++)
    {
        //Multiplicar posiciones pares por 2
        int num=0;
        if(k%2 == 0)
        {
           sumapar = cedula[k]*2; //si el resultado es mayor 0 igual ue 9 se resta 9
           if(num>=9) 
             num=num-9;
            sumapar+=num;
        }
        else{//se suman las posiciones impares 
            sumaimpar+=cedula[k];
        }  
    }//fin de for 
    int suma = sumapar + sumaimpar;
    //aplicamos módulo 10
    int resto = suma % 10;
    int digitoVer = 10 - resto;
    if(digitoVer == 10)
        digitoVer = 0;

        //validamos si el digito coinside con el ultimo numero de la cedula
    if (digitoVer ==cedula [total-1])
        return true;
    else
        return false;
}

int main ()
{
    int cedula []= {0,8,0,2,2,2,3,2,2,2};
    int total = sizeof(cedula)/sizeof(cedula[0]);

    if (CedulaCorrecta(cedula,total))
        cout<<endl<<"la cedula es correcta";
    else
        cout<<endl<<"la cedula NO es correcta";
 return 0;
}