
#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    else if(year % 100 == 0)
        return false;
    else if(year % 4 == 0)
        return true;
    else
        return false;
}
int main()
{
    int T,i=0;
    cin>>T;
    while(T--)
    {
        i++;
        int d,m,y,qy,ans=0;
        bool b=false;
        cin>>d>>m>>y>>qy;
        if(m == 2 && d == 29)
        {
            y+=4;
            for(int j=y;j<=qy;j+=4) {
                b=false;
                b=isLeapYear(j);
                if(b) ans++;
            }
        }
        else
        {
            ans = (qy-y);
        }
        cout << "Case " << i << ": "<<ans <<endl;
    }
    return 0;
}
