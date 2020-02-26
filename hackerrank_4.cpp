#include <bits/stdc++.h>
using namespace std;

int main (){
	string s;
	long long x,i,n,j;
	
	cin>>n;
	
	for(j=0; j<n; j++){
	
	
		cin >>s;
	
		x = s.length();
			long long sum=0;
			for(i=0; i<x; i++){
				if(s[i] == s[i+1]){
					sum++;
				}
			}
	cout<<sum<<endl;
	}

	
}
