#include<iostream>
using namespace std;
int main()
{
    float number1, number2,result;
    char choose;
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<endl;
    cout<<"Enter the second number:";
    cin>>number2;
    cout<<endl;
    cout<<"Choose operation [+, -, /, x,] ";
    cin>>choose;
    cout<<endl;
    switch (choose)
    {
    case '+':
        result=number1+number2;
        cout<<result;
        break;

    case '-':
    result=number1-number2;
    cout<<result;
    break;

    case'X':
    result=number1*number2;
    cout<<result;
    break;

    case'/':
    result=number1/number2;
    cout<<result;
    break;

    default:
    cout<<"Invalid Operator!";
        break;
    }


}