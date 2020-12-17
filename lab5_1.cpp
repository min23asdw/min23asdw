#include<iostream>
using namespace std;

int main(){
  int x,y=1;
  int Even=0,Odd=0;
  while(y!=0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x!=0){
    if(x%2==0){Even=Even+1;}else{Odd=Odd+1;}
  }
    else{y=0;}
   }
    cout << "#Even numbers = "<< Even << "\n";
    cout << "#Odd numbers = "<<Odd;
    return 0;
}
