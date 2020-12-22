#include<iostream>
#include<cmath>
using namespace std;
string hideVowels(string word){
  int i = 0;
  int x = word.length();
  string text = "";
  while(i < x ){
if(toupper(word[i]) == 'A'){
 text += "_";}
 else if(toupper(word[i]) == 'E'){
  text += "_";}
  else if(toupper(word[i]) == 'I'){
   text += "_";}
   else if(toupper(word[i]) == 'O'){
    text += "_";}
    else if(toupper(word[i]) == 'U'){
     text += "_";}

 else{ text += word[i];}
i++;
  }
return text;
}

int main(){
cout << hideVowels("Chiang Mai University");
return 0;
}
