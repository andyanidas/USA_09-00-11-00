#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the size: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || i == n-1 || j==0 || j==n-1 || i == j || j == n - 1 - i){
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
i=0	*****	i = 0 j = n-1
i=1	** **	i = 1 j = n-2
i=2	* * *	i = 2 j = n-3
i=3	** **	i = 3 j = n-4
i=4	*****	i = 4 j = n-5

*/
