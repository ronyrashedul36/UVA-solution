#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll binPow(ll a, ll b, ll m)
{
    a%=m;
    ll res = 1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,n,m;
        cin>>a>>n>>m;
        cout << binPow(a,n,m) << endl;
    }
    return 0;
}


