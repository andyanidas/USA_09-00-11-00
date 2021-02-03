#include<iostream>

using namespace std;

int main(){
	int num,count = 0;
	cout<<"Enter an integer: ";	//10
	cin>>num;
	
	for(int i = 0; num>0; num/=10){
		count++;
	}
	cout<<count;
	
	return 0;
}

