#include<iostream>
using namespace std;
int app(int x){
if(x<0){x = x*-1;
  return x;
}else return x;
}
int adiff(int A,int B){
  int a=0,b=0;
  int C;
 int timestamp=0;
while(timestamp<=app(A)){
  if(A>0){
    a++;
    if(timestamp%360==0){a=0;}
  }else{a--;
      if(timestamp%360==0){a=0;}}
  timestamp++;

}
timestamp=0;
while(timestamp<=app(B)){
  if(B>0){
    b++;
    if(timestamp%360==0){b=0;}
  }else{b--;
      if(timestamp%360==0){b=0;}}
  timestamp++;

}

if(a>b){C=a-b;}
else{C=b-a;}
if(C>180){C=C-360;}
//cout << "a =" <<a<<"\n b=" <<b<<"\n";
C=app(C);
  return C;
}
int main(){

cout <<  adiff(95,260);

  return 0;
}
