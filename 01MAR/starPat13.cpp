#include<iostream>

using namespace std;

int main(){
	
	for(int i=0; i<10 ; i++){
		for(int j = 0; j <10-i-1; j++){
			cout<<" ";
		}
		for(int j = 0; j <10; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}


/* n = 5
  j=01234
i=0	1234*****	n-i-1 shirheg space hevlene	
i=1 123*****	
i=2	12*****	
i=3	1*****	
i=4	*****	

*/
