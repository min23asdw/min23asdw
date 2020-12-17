#include<iostream>
using namespace std;
int cheetah(int bath){
  int bot = bath/10; //จำนวนขวด
  int count=bot; //นับจำนวนฝาขวด
  int x =bot;
  int i=0; //ลูป
while(i<count || count >= 3){
  if(i%3==0){
    bot=bot+1;
    count=count-2;
  }
  i++;
}
std::cout << count<<"\n";
return bot;
}




int main(){

cout << cheetah(204);


  return 0;
}
