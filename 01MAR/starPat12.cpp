#include<iostream>

using namespace std;

int main(){
	
	
	
	for(int i=0; i<10 ; i++){
		for(int j = 0; j <10; j++){
			if(i == 0 ||  i == 9 || j == 0 || j==9 || i==j || i + j == 10 -1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}


/* n = 6
  j=01234
i=0	*****	i = 0 j = 5		i == n - j - 1
i=1 *****	i = 1 j = 4
i=2	*****	i = 2 j = 3		i + j == n -1
i=3	*****	i = 3 j = 2
i=4	*****	i = 4 j = 1
			i = 5 j = 0
*/
