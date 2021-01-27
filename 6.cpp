#include<iostream>

using namespace std;

int main(){
	bool check = 3<5 && 0>5;
	bool rainy = false;
	bool tooSunny = true;
	
	cout<<"Is today rainy ? : ";
	cin>>rainy;
	cout<<"Is outside too sunny? : ";
	cin>>tooSunny;
	
	if(rainy || tooSunny){
		cout<<"Take the umberl";
	} else {
		cout<<" You dont need umbr";
	}
	
//	cout<<check;
	
	
	return 0;


}
