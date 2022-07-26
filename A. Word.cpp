#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    int captialCount=0, lowerCount=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            captialCount++;
        }
        if(s[i]>=97 && s[i]<=122){
            lowerCount++;
        }
    }
    
    if(captialCount > lowerCount){
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122)
                s[i] = s[i] - 32;
        }
    }else {
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90)
                s[i] = s[i] + 32;
        }
    }

    cout<<s;

}
