#include<iostream>
#include<cmath>
using namespace std;
int main()
{

 char choice;

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

    case'%':
    if(number1!=0)
    {
    cout<< fmod(number1,number2);

    break;
    }

    default:
    cout<<"Invalid Operator!";
        break;


    cout<<"Do you want to do another calculation? (y/n)";
    cin>> choice;
    }




}