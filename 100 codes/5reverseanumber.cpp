#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int num,temp,rev_num=0;
    cout<<"netre the number";
    cin>>num;
    while(num!=0){
        temp=num%10;
        
        cout<<rev_num<<endl;
        rev_num=(rev_num*10)+temp;
        num=num/10;
        
         }
    cout<<rev_num;

}