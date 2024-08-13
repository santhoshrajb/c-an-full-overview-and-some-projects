#include <iostream>

using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter three numbers";
    cin>>num1>>num2>>num3;
    int temp;
    temp=num1>num2?num1:num2;
    int res=temp>num3?temp:num3;
   
cout<<res;
 
}