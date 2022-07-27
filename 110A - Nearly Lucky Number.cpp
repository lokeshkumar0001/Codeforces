165849926	Jul/27/2022 10:47UTC+5.5	lokeshkrs2001	110A - Nearly Lucky Number	GNU C++17	Accepted	30 ms	0 KB

#include<bits/stdc++.h>
using namespace std;
 
long long c=0;
 
 
int main()
{
    long long n;
    cin>>n;
    long long N=21;
    vector <long long> f(21,1);
    for (int i = 1; i < N; ++i) {
		f[i] = f[i - 1] * i;
	}
    long long ans=(f[n])/(f[n/2]*f[n/2]);
    ans=ans*f[n/2-1];
    ans=ans*f[n/2-1];
    long long c=ans/2;
    cout<<c;
    return 0;
}
