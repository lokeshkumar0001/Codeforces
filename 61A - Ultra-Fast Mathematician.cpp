//166089676	Jul/29/2022 13:58UTC+5.5	lokeshkrs2001	61A - Ultra-Fast Mathematician	GNU C++17	Accepted	15 ms	0 KB
#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++){
        if(s1[i]==s2[i])
            cout<<0;
        else cout<<1;
    }
}
