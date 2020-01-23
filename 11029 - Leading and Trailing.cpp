#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll binPow(ll b, ll p)
{

    ll res=1;
    while(p>0)
    {
        if(p&1)
        {
            res=res*b%1000;
        }
        b=b*b%1000;
        p>>=1;
    }
    return res%1000;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        printf("%d...%03d\n", (int)(pow(10, fmod(y*log10(x), 1))*100), binPow(x,y));
    }
    return 0;
}


