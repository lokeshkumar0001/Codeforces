#include<bits/stdc++.h>
using namespace std;

string helper(string s){
    string result;
    map<char,int> mp;

    for(int i=0;i<s.length();i++){
        if(s[i] != '+') mp[s[i]]++;
    }

    bool first_time = true;
    for(auto m:mp){
        int count = m.second;
        while(count--){
            if(!first_time){
                result += '+';   
            }else  first_time = false;
            result +=  m.first; 
        }
    }

    return result;

}

int main(){
    string s;
    // cout<<"Enter the string";
    cin>> s;
    string result = helper(s);
    cout<<result;
}