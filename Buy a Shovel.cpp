#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=1,t,count=0,q;
    cin>>n>>m;
    t=n;
    while(1)
    {
        t=n;


        if((t*i-m)%10==0 || (t*i)%10==0)
            break;
            else
        i++;
    }
    cout<<i;
}
