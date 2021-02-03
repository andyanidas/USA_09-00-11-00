#include<iostream>

using namespace std;

int main(){
	int num,count = 0,num1,lastDigit,firstDigit;
	cout<<"Enter an integer: ";	//6515	//count = 4
	cin>>num;
	num1 = num;
	
	for(int i = 0; ???>0; num/=10){
		count++;
	}
	num = num1;
	
	lastDigit = num%10;
	
	for(int i = 0; num>0; num/=10){
		firstDigit = num;
	}
	
	int temp=1,newNum;
	for(int i = 1; i<???; i++){
		temp = temp*10;
	}
	???
	newNum = num%temp;
	
	newNum = newNum/10;
	newNum = newNum*??? + ???;
	newNum = newNum + lastDigit*???;
	
	
	cout<<newNum;
	
	return 0;
}

