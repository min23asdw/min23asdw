#include<iostream>
using namespace std;
int cheetah(int bath){
  int bot = bath/10; //จำนวนขวด
  int count=bot; //นับจำนวนฝาขวด
  int x =bot;
  int i=0; //ลูป
while(i<count){
  if(i%3==0){
    bot=bot+1;
    count=count-2;
  }
  i++;
}
if(count > 2){cheetah(count*10);}
std::cout << count<<"\n";
return bot;
}




int main(){

cout << cheetah(105);


  return 0;
}
