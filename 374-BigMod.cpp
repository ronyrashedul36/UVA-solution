#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll binPow(ll b, ll p, ll m)
{
    b%=m;
    ll res=1;
    while(p>0)
    {
        if(p&1){
            res=res*b%m;
        }
        b=b*b%m;
        p>>=1;
    }
    return res;
}
int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        cout << binPow(b,p,m) << endl;
    }
    return 0;
}


