#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int prime_num, i,flag=0;
    cout << "entert the limit";
    cin >> prime_num;

    if (prime_num == 2)
        cout << "prime number";

    else if (prime_num < 0)
        cout << "sorry no negative numbers";

    else if (prime_num == 1)

        cout << "neither prime nor composit";
    else{

        for(i=2;i<sqrt(prime_num);i++){
            if(prime_num%i==0){
                flag+=1;

            }
        

        }
        if (flag<1){
            cout<<"prime number";
        }
        else{
            cout<<"not a prime";
        }
    }
              

            
}