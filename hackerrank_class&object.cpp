#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,i,j,x,sem=0;

    cin>>n;


    for(i=0; i<n; i++){

        int sum =0,sam=0;
        for(j=0; j<5; j++){
            cin>>x;

            if(i==0){
                sam+=x;
            }else{
                sum+=x;
            }
        }
        if(sam <sum){
            sem++;
        }


    }
    cout<<sem-1<<endl;

}
