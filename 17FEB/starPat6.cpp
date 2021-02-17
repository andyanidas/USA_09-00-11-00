#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int k=0 ; k<i; k++){
			cout<<" ";
		}
		for(int j=0; j<n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
/* n = 5
j=	01234
i=0	*****	i ->>hevlegdeh space iin too
i=1	1*****	
i=2	12*****	
i=3	123*****	
i=4	1234*****	

*/
