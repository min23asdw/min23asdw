#include<iostream>
#include<cmath>
using namespace std;
void printNum(int x){
	if(x < 0){
		cout << "(" << x << ")";
	}else{
		cout << x;
	}
}

void printPow(int x, int k){
	printNum(x);
	cout << "^";
	printNum(k);
}

int main(){
 int k;
	int a[20] = {3,0,-2,44,-4,1,69,2,-5,2,-2,0,7,-12,4,1,6,35,0,5};
	int b[20] = {4,1,0,117,10,1,260,2,-12,-2,-2,-1,25,0,7,2,9,12,-49,0};
	int c[20] = {5,1,2,125,25,2,-269,1,-13,0,-1,6,25,12,11,3,6,37,49,5};

	cout << "Enter k: ";
	cin >> k;

	int i = 0, count = 0;
	while(i < 20){
		if( pow(c[i],k) == pow(a[i],k) + pow(b[i],k) ){
			printPow(c[i],k);
			cout << " = ";
			printPow(a[i],k);
			cout << " + ";
			printPow(b[i],k);
			cout << "\n";
			count++;
		}
		i++;
	}
	cout << "Totally " << count << " place(s)";

	return 0;
}
