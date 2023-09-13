#include<iostream>
using namespace std;
int main()
{
    int num1;
    int i=1;
    int num2;
    cout<<"enter a number";
    cin>>num1;
    cout<<num1<<endl;
    do{
        num2=num1*i;
        cout<<num2<<endl;
        i=i+1;
    }while(i>0 && i<11);
}