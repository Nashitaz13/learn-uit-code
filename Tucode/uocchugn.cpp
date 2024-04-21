#include <iostream>
using namespace std;
/* tim uoc chung cua 2 so a va b*/

int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap a: ";
	cin>>a;
	
	cout<<"\nNhap b: ";
	cin>>b;
	
	cout<<"\nUoc chung cua "<<a<<" va "<<b<<" la: ";
	if(a>b){
		for(int i=1;i<=b;i++){
			if(a % i == 0 && b % i == 0) cout<<" "<<i;
		}
	}
	
	else if(a == b){
			for(int i = 1;i <= b; i++){
			if(a % i == 0 && b % i == 0) cout<<" "<<i;
		}
	}
	
	else {
		for(int i = 1;i <= a; i++){
			if(a % i == 0 && b % i == 0) cout<<" "<<i;
		}
	}
	return 0;
}
