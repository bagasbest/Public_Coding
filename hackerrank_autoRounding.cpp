#include <bits/stdc++.h>
using namespace std;

int main (){
	int n,x,i;
	
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>x;
		
		if(x >=38){
			if((x+2)%5==0){
				cout<<x+2<<endl;
			}else if((x+1)%5==0){
				cout<<x+1<<endl;
			}else{
				cout<<x<<endl;
			}
		}else {
			cout<<x<<endl;
		}
	}
}
