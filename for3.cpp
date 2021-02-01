#include<iostream>

using namespace std;

int main(){
	bool check = true;
	string answer;
	
	while(check){
		cout<<"Do you want quit (yes | no) ?: ";
		cin>>answer;
		if(answer == "yes"){
			check = false;
			cout<<"Bye Bye!";
		}
	}
	
	
	return 0;
}
//x++;					//x = x + 1; 	x += 1;

