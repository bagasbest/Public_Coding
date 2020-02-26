#include <bits/stdc++.h>
using namespace std;

int main (){
	long long x[5],i, maks=-1e9-1, min=1e9+1,s=0,s1=0,counter=0,caunter=0;
	
	for(i=0;i<5; i++){
		cin>>x[i];
		
		if(maks < x[i]){
			maks = x[i];
		}if (min > x[i]){
			min = x[i];
		}
	}
	
	
	for(i=0;i<5; i++){
		if(x[i] == maks){
			counter+=1;
		}if(x[i] == min){
			caunter+=1;
		}
		
		
		cout<<counter<<" "<<caunter<<endl;
		
		
		if(x[i] != maks || x[i] == maks){
			if(x[i] != maks){
			   s += x[i];
			}else if(x[i] == maks && counter >1){
				s+=x[i];
			}
		
		}if(x[i] != min || x[i] == min){
			if(x[i] != min){
				s1 += x[i];
			}else if(x[i] == min && caunter > 1){
				s1+= x[i];
			}
		}
	}
	
	cout<<s<<" "<<s1<<endl;
}
