#include <bits/stdc++.h>
using namespace std;

struct student{
        int age,standard;
        string f_n,l_n;
    };

int main(){


    student st;


    cin>>st.age>>st.f_n>>st.l_n>>st.standard;

    cout<<st.age<<endl;
    cout<<st.l_n<<", "<<st.f_n<<endl;
    cout<<st.standard<<endl<<endl;

    cout<<st.age<<","<<st.f_n<<","<<st.l_n<<","<<st.standard<<endl;
}
