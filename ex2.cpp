#include<iostream>
#include<cmath>
using namespace std;



int main(){
  int n,k;
  cout<< "Enter n: ";
cin >> n;
cout << "Enter k: ";
cin >> k;
int t = n;
while(t>0){
cout << "-";
  t--;
}
cout<<"\n";
int i = pow(n,2);
while (i>0) {
if(i>0){

  while(i>0){
if(i%k==0){
cout << "o";
}else{cout << "x";}

if(n==1||i%n==1){
  cout << "\n";
}
i--;
}
}
}
t =n;
while(t>0){
cout << "-";
  t--;}



return 0;
}
