#include<iostream>
using namespace std;
int cheetah(int bath){
  int bot = bath/10; //จำนวนขวด
  int count=bot; //นับจำนวนฝาขวด
  int i=0; //ลูป
  int x=2;
if(bot>=3){
while(i<count || count >= 3){
  if(i%3==0){
    bot=bot+1;
    count=count-2;
  }
  i++;
}
return bot;
}else return bot;
}





int main(){
cout << cheetah(35);


  return 0;
}
