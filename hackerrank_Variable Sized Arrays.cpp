#include <bits/stdc++.h>
using namespace std;

int main(){
	long long j,n,q,i,panjang,x,y,q_number;
	
	cin>>n>>q;
	
	//kita menyelesaikan dengan menggunakan vektor (array dinamis)
	vector<vector<int>> a(n);
	
	for(i=0; i<n; i++){
		cin>>panjang;
		
		//isi vektor sebanyak long
		a[i].resize(panjang);
		for(j=0; j<panjang; j++){
			cin>>a[i][j];
		}
	}
	
	//isi kueri sebanyak q
	for(int q_number=0; q_number<q; q_number++){
		cin>>x>>y;
		
		cout<<a[x][y]<<endl;
	}
}
