#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	
	if(age < 18){
		cout<<"Teenage u have many restriction";
	} else if(age < 21){
		cout<<"You cannot go to club";
	}else if(age < 45){
		cout<<"You r an adult so you can do anything";
	}else{
		cout<<"You are old so stay home";
	}
	
//	cout<<check;
	
	
	return 0;


}
