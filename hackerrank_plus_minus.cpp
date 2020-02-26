#include <bits/stdc++.h>
using namespace std;

int main (){
	double n,i,x,s=0,s1=0,s2=0;
	
	cin>>n;
	
	for(i=0; i<n; i++){
		cin>>x;
		
		if(x > 0){
			s+=1;
		}else if(x  < 0){
			s2+=1;
		}else{
			s1+=1;
		}
	}
	
	double a = s/n;
	double b = s2/n;
	double c = s1/n;
	
	string str = to_string(a);
	cout<<str<<endl;
	string str1 = to_string(b);
	cout<<str1<<endl;
	string str2 = to_string(c);
	cout<<str2<<endl;
}
