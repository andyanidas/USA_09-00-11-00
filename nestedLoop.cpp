#include<iostream>

using namespace std;

int main(){
	int Max;
	cout<<"Enter an integer: ";	//10
	cin>>Max;
	
	for(int i = 0; i < Max; i++){
		for(int j = 0; j < Max; j++){
			cout<<i;
		}
		cout<<endl;
	}
	
	return 0;
}

