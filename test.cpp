#include<iostream>
using namespace std;
int cheetah(int bath){
  int bot = bath/10; //จำนวนขวด
  int count=bot; //นับจำนวนฝาขวด
  int i=0; //ลูป
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
cout <<"\n ฝา " << count;
}





int main(){
int x=0;
std::cout << "money: "  ;
cin >> x;
cout << cheetah(x);


  return 0;
}
