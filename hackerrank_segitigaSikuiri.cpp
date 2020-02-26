#include <bits/stdc++.h>
using namespace std;

int main (){
	int n,i,j,x;
	
	cin>>n;
	int s =n-1;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(j >= s){
				cout<<"#";
				if(j==s){
					s--;
				}
				
			}else{
				cout<<" ";
			}
		}cout<<endl;
	}
}
