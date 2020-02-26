#include <bits/stdc++.h>
using namespace std;

int main (){
	long long b=0,q,n = 1e5,i=0, max = -1e9,c=1;
	string zzz;
	long long x[n];


	while(cin>>x[i]){
		
		
		if(x[i] != 0 ){
			if(max == 1){
				b=i;
			}
			
			if(x[i] == x[i-1] && i > 0){
				c++;
				if(max < c){
					max = c;
					q = x[i];
				}
			}else if(x[i] != x[i] && i> 0){
				c /=c;
				
				
			}
				
		}
		
		else{
			if(x[i] == 0){

				cout<<q<<endl;
				max /= max;
				c /=c;
			}
		}
		
		
		i++;
	}
	
}
