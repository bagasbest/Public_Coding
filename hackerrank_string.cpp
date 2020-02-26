#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    int x,y;

    cin>>a>>b;

    x = a.size();
    y = b.size();

    c = a+b;

    cout<<x<< " "<<y<<endl;
    cout<<c<<endl;
    cout<<b[0]<<a.substr(1,x)<<" "<<a[0]<<b.substr(1,y)<<endl;

}
