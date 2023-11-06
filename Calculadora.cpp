#include <iostream>

using namespace std;

int main()
{
    double num1,num2;
    string opr;
        cout<<"Digite o primeiro numero: ";
        cin>>num1;
        cout<<"Digite o segundo numero: ";
        cin>>num2;
        cout<<"Digite seu operador (soma, subtracao, divisao ou multiplicacao): ";
        cin>>opr;

        if (opr=="soma"){
            cout<<num1+num2;
        }else if (opr=="subtracao"){
        cout<<num1-num2;
        }
        else if (opr=="multiplicacao"){
           cout<< num1*num2;
        }else {
       cout<< num1/num2;}


    return 0;
}
