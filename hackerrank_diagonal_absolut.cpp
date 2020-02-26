#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin>>n;
	int m[n][n], i,j;
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cin>>m[i][j];
		}
	}
	
	int s=0,s1=0;
	int x =n-1, y=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i == j){
				s += m[i][j];
			}if(j == x && i ==y ){
				s1 += m[i][j];
				x--;
				y++;
			}
			
			
		}
	}
	//cout<<s<<" "<<s1<<endl;
	
	cout<<abs(s-s1)<<endl;
}
