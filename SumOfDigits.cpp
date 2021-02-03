#include<iostream>

using namespace std;

int main(){
	int num,sum = 0;
	cout<<"Enter an integer: ";	//10
	cin>>num;
	
	for(int i = 0; num>0; num/=10){
		sum = sum + num%10;
	}
	
	cout<<sum;
	
	return 0;
}

