#include<bits/stdc++.h>
using namespace std;
class Calculator{
    public:
    int num1,num2;
    string operand;
    Calculator(int a,int b,string op){
        num1 =a;
        num2=b;
        operand=op;
    }
    int calculate(){
        if(operand =="+"){
            return num1+num2 ;
        }
        else if(operand =="-"){
            return num1-num2;
        }
        else if(operand =="*"){
            return num1*num2;
        }
        else if(operand =="/"){
            return num1/num2;
        }
      else{
        cout<< "Invalid operator" <<endl;
        return 0;
    }
}
 void displayResult(){
    cout<<"Result is:"<<calculate()<<endl;
 }
};
int main(){
    int a,b;
    string op;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter operator(+,-,*,/):";
    cin>>op;
    Calculator calc(a,b,op);
    calc.displayResult();
    return 0;
}