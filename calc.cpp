#include<iostream>

using namespace std;

int main(){
	char op;
	int num1, num2;
	double result;
	bool valid = true;	//when user entered inviled op we will set this VALID into false

	
	cout<<"Enter an operator(+-*/) : ";
	cin>>op;
	cout<<"1st num : ";
	cin>>num1;
	cout<<"2nd num : ";
	cin>>num2;
	
	if(op == '*'){
		result = num1 * num2;
	}else if(op == '/'){
		result = num1/num2;
	}else if(op == '+'){
		result = num1 + num2;
	}else if(op == '-'){
		result = num1 - num2;
	}else {
		cout<<"You have entered inviled operator!";
		valid = false;
	}
	
	if(valid){
		cout<<num1<<" "<<op<<" "<<num2<<" = "<<result;
	}
	
	
	
	return 0;
}

