#include <iostream>
using namespace std;
// Se ingresa la edad de un estudiante. Si la edad es de 5 a 10 años, se hace
// Un recargo del %1 al costo de la matricula. Si la edad es superior a 10 años
// Y menor o igual que 15 años, el recargo será del %2. Si la edad es mayor que
//
int main() {
    int a;
    double re=0, cm=0,rec,vp;
    cout<<"Ingrese la edad"<<endl;
    cin>>a;
    cout<<"Ingrese el costo de la matricula"<<endl;
    cin>>cm;
    if(a<5)
    {
        re=0;
    }
    else
    {
        if(a<=10)
        {
            re=0.01;
        }
        else
        {
            if(a<=15)
            {
                re=0.02;
            }
            else
            {
                if(a<=20)
                {
                    re=0.04;
                }
                else
                {
                    re=0.06;
                }
            }
        }
    }
    rec= cm*re;
    vp= cm+rec;
    cout<<"Tu edad es de "<<a<<" años, tu recargo es: "<<rec<<endl;
    cout<<"El valor total a pagar por la matricula es de: $"<<vp<<endl;


    return 0;
}
