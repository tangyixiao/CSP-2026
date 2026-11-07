#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("string1.in",r,stdin);
    freopen("string.out",w,stdout);
    int ak12,ak74m;
    cin>>ak12;
    char ak15;
    int hk417=0;
    string hk416;
    for(int i=0;i<ak12;i++)
    {
        cin>>ak74m>>ak15;
        hk417+=ak74m;
        for(int j=0;j<ak74m;j++)
        {
            hk416+=ak15;
        }
    }
    int hkm27=0;
    for(int i=0;i<=hk417/2;i++)
    {
        if(hk416[i]!=hk416[hk417-i-1])
        {
            hkm27++;
        }
    }
    cout<<hkm27;
    fclose("string1.in");
    fclose("string.out");
    return 0;
}
