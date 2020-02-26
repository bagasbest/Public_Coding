#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n,m,i;
	
	cin>>n>>m;
	
	long long x[n];
	
	for(i=0; i<n; i++){
		cin>>x[i];
	}
	
	sort(x,x+n);
	
	long long z = m,s=0,a=0,c=1;
	for(i=n-1; i>=0; i--){
		
	if(a < m){
		if(z > 0){
			s+=x[i];
			z--;
			a++;
		}
		
	}else if(a >= m){
		if(z == 0){
			z += m;
			c++;
		}
		if(z > 0){
			s += c*x[i];
			z--;
		}
	}
	}
	cout<<s<<endl;
}
