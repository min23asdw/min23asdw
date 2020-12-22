#include<iostream>
#include<cmath>
using namespace std;


string checkDangAvailability(int Hs,int Ms,string St,int Hf,int Mf,string Ft){
  string x;
int chackstart=0;
int chackend=0;
if(St[0] == 'P'){
Hs = Hs+12;
}
if(Ft[0] == 'P'){
  Hf = Hf+12;
  }
int start = (Hs*100)+Ms;
int end = (Hf*100)+Mf;
if(start >= 830){
  chackstart= 1;
}
if(end <= 1830){
  chackend= 1;
}


if(chackstart&&chackend == 1){
  x = "YES";
}else{x = "NO";}
return x;
}

int main(){

cout << checkDangAvailability(8,45,"AM",1,0,"PM");
return 0;
}
