#include <bits/stdc++.h>
using namespace std;

int main (){
	int i,n,s=0;
	
	cin>>n;
	int x[n];
	
	for(i=0; i<n; i++){
		cin>>x[i];
	}
	
	sort(x,x+n);
	
	for(i=0; i<n; i++){
		if(x[i] == x[i+1]){
			s++;
			i++;
		}
	}
	
	cout<<s<<endl;
	
}
