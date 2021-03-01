#include<iostream>

using namespace std;

int main(){
	
	for(int i=0; i<10 ; i++){
		for(int j = 0; j <i+1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}


/* n = 5
  j=01234
i=0	*		1
i=1 **		2
i=2	***		3
i=3	****	4
i=4	*****	5

*/
