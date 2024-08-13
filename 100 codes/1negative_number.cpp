#include <iostream>
using namespace std;
/*using ternary operator we did the check */

/*condition ? op:else op*/


int main()
{int num;
cout<<"enter the number";

  cin>>num;
 
  if (num <0)
  cout<<"negative";
  else 
   (num==0) ? cout<<"zero": cout<<"positive";
   return 0;

    
    }