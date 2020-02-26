#include <bits/stdc++.h>
using namespace std;

int main (){
	string t;
	
	cin>>t;
	
	int x = t.length();
	
	string a = t.substr(8,9);
	
//cout<<t.substr(0,2)<<endl;
	
	if(a == "AM"){
		if(t.substr(0,2) != "12"){
			cout<<t.substr(0,8)<<endl;
		}else{
			cout<<"00"<<t.substr(2,x-4)<<endl;
		}
	}else if(a == "PM"){
		if(t.substr(0,2) != "12"){
			int b = stoi(t.substr(0,2));
			cout<<12+b<<t.substr(2,x-4)<<endl;
		}else{
			cout<<t.substr(0,8)<<endl;
		}
	}
}
