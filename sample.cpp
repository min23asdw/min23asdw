#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}
string same(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;
}

string test(string x,string y){

  if(same(x)==same(y)){return "Yes";}
  else return "No";

}

int main(){
  string x;

    cout << "Input text: ";
    cin >> x;
    cout << "Reversed text: "  << func1(x);

    cout << "\nPalindrome: " << test(x,func1(x));
    return 0;
}
