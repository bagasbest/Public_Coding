#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n,i,max=-1e7-1,c=0;
	
	cin>>n;
	
	long long x[n];
	
	for(i=0; i<n; i++){
		cin>>x[i];
		
		if(max < x[i]){
			max = x[i];
		}
	}
	
	for(i=0; i<n; i++){
		if(max == x[i]){
			c++;
		}
	}
	
	cout<<c<<endl;
}
