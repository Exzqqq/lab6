#include<iostream>
using namespace std;

int main(){
    int i;
    int n;
    int odd=0;
    int even=0;

   do
   {
      cout << "Enter an integer: ";
    cin >>n;

    if (n%2==0&&n!=0)
    {
       even++;
    }else if (n%2!=0&&n!=0)
    {
        odd++;
    }
   
    
   } while (n!=0);
   

    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
