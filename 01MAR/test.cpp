#include<iostream>

using namespace std;

int main(){
	bool rain;
	rain = false;
	bool goOut;
	goOut = true;
	
	if(rain || goOut){
		cout<<"Take umbrella!";
	}else{
		cout<<"No need for umberella!";
	}
	
	
	/*
	for(int i=0; i<10 ; i++){
		for(int j = 0; j <10; j++){
			if(i==j){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}*/
	
	return 0;
}
