#include<bits/stdc++.h>
using namespace std;
int a[1000050];
freopen("and.in","r",stdin);
freopen("and.out","l",stdout);
string sb(int a)
{

    string b;

    while(a!=0)
    {
        b+=a%2;
        a/=2;
    }
    return b;
}
int main()
{
    int n,m;
    cin >> n>> m;
    string t;

    for(int i=1;i <=n;i++)
    {

        cin >>a[i];
        cout << sb(a[i]);
    }
}

