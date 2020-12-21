#include<iostream>
using namespace std;
int main(){
int i=0;
 int k;
cout << "Please input k: ";
int P[9999];
 while(i<9999){
       P[i]=2*i+1;
   i++;
 }
 int result=0;
cin >> k;
if(k>0){
i=0;
while(i<5000){
  if(P[i]%k==0){
  result = result-P[i];
}else{
  result = result+P[i];
}
i++;
}
cout << "Result = " << result;

}else{cout << "Invalid input!!!";}


  return 0;
}
