#include<iostream>

using namespace std;

int main(){
	int num = 99999997;
	bool prime = true;
	cout<<"Enter an integer: ";
	//cin>>num;	//result = 1 *2*2*2*2*2
	
	//2,3,5,7,11,13,17,19,23,29
	for(int i =2 ; i<num/2 ; i++){
		if(num%i==0){
			prime = false;
		}
	}
	
	if(prime){
		cout<<num<<" is a prime number";
	}else{
		cout<<num<<" is not a prime number";
	}
	
	return 0;
}
