#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char op;
    cout<<"Enter first number : "<<endl;
    cin>>num1;

    cout<<"Enter second number : "<<endl;
    cin>>num2;

    cout<<"Enter operator (+,-,*,/) : "<<endl;
    cin>>op;

    switch(op){
        case '+' : 
            cout<<"Result "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Result "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Result "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            if(num2 !=0)
            {
                cout<<"Result  "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            }
            else{
                    cout<<"Error: Division by zero is not allowed .";
                }
            break;
        default :
                cout<<"Please enter a valid operator ."<<endl;
                break;
    }
    return 0;

}