#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Enter an integer: ";
	cin>>num;	//result = 1 *2*2*2*2*2

	
	int result=1;
	
	for(int i = 1; i<=num; i++){
		result = result*i;
	}
	
	cout<<"factorial of "<<num<<" is "<<result;
	
	return 0;
}
