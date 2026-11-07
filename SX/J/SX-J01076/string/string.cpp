#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ll n,s=0;
    ll a[1010];
    string c[1010];
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i]>>c[i];
    }
    for(ll i=0; i<n; i++)
    {
		if(c[i]!=c[n-i-1])
        {
			if(a[i]>a[n-i-1]){
				s+=a[i];
				a[n-i-1]=a[i];
				c[n-i-1]=c[i];
			}
			else if(a[n-i-1]>a[i]){
				s+=a[n-i-1];
				a[n-i-1]=a[i];
				c[n-i-1]=c[i];
			}
			else {
				s+=a[i];
				c[n-i-1]=c[i];
			}
        }
    }
    cout<<s;
    return 0;
}