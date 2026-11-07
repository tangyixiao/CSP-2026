#include <bits/stdc++.h>
using namespace std;


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("and1.in",r,stdin);
    freopen("and.out",w,stdout);
    int hk416,hk416a5;
    cin>>hk416>>hk416a5;
    int hk416d[200000];
    int hk417[2000000000];

    for(int i=1;i<=hk416;i++)
    {
        cin>>hk416d[i];
    }
    sort(hk416d,hk416d+hk416a5);
    cout<<hk416d[hk416-hk416a5+1];

    fclose("and1.in");
    fclose("and.out");
    return 0;
}
