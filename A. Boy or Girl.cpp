#include<bits/stdc++.h>
using namespace std;

string boyOrGirl(string);

int main(){
    string s;
    cin >> s;

    cout<< boyOrGirl(s);

    return 0;
}

string boyOrGirl(string s){
    unordered_map<char,int> mp;

    for(char i:s) mp[i]++;

    return mp.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
}