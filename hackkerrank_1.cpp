#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n,m,i;
	
	cin>>n>>m;
	long long x[n];
	
	for(int i=0; i<n; i++){
		cin>>x[i];
	}
	
	sort(x,x+n);
	
	long long k = m,s=0;
	for(i=0; i<n; i++){
		if(k - x[i] >=0){
			k -= x[i];
			s++;
		}
	}
	cout<<s<<endl;
}
