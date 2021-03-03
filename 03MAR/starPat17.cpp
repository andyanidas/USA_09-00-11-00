#include<iostream>

using namespace std;

int main(){
	
	for(int i = 0; i<10; i++){
		for(int j = i+1; j <10; j++){
			cout<<" ";
		}
		
		for(int j = 0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
