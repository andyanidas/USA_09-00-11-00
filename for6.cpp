#include<iostream>

using namespace std;

int main(){
	int Max,sum=0;
	cout<<"Enter an integer: ";	//10
	cin>>Max;
	
	for(int i = 0; i < Max; i++){
		sum = sum + i;
	}
	cout<<sum;
	
	return 0;
}

