#include<iostream>

using namespace std;

int main(){
	int num,one=0; two,three,four,;
	cout<<"Enter an integer: ";
	cin>>num;	//3216461
	//1 ->2 
	//2- >1
	if(num%10==1){
		one++;
	}else if(num%10==2){
		two++
	}
	int day = 5;
	switch(day){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"Wed";
			break;
		case 4:
			cout<<"Th";
			break;
		case 5:
			cout<<"Friday!";
			break;
		case 6:
			cout<<"Sat";
			break;
		case 7:
			cout<<"Sun";
			break;
		default:
			cout<<"Wrong input!";
			break;
	}
	

	
	return 0;
}
