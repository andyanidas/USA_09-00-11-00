#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || i == n-1 || j==0 || j==n-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
/* n = 5
j=	01234
i=0	*****
i=1	*   *
i=2	*   *
i=3	*   *
i=4	*****

*/
