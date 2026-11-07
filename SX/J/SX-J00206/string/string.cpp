#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=100100;
ll n,c,t,sum,res,f;
ll a[MAXN*2];
char b[MAXN*2];
string s="",s1="";
void solve()
{
//    cin>>n;
//    for(ll i=1; i<=n; i++)
//    {
//        cin>>a[i]>>b[i];
//        c+=a[i];
//    }
//    for(ll i=1; i<=n; i++)
//    {
//        sum+=a[i];
//        if(sum>c/2)
//        {
//            f=1;
//            break;
//        }else if(c/2==sum){
//                f=0;
//                break;
//		}
//    }
//    for(ll i=1; i<=n-i+1; i++)
//    {
//        if(b[i]!=b[n-i+1])
//        {
//            res+=min(a[i],a[n-i+1]);
//        }
//        else
//        {
//            res+=abs(a[i]-a[n-i+1]);
//        }
//    }
//    if(f==1)
//        cout<<res+c-sum;
//    else cout<<res;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=a[i]; j++)
        {
            s+=b[i];
        }
    }
    for(ll i=n; i>=1; i--)
    {
        for(ll j=1; j<=a[i]; j++)
        {
            s1+=b[i];
        }
    }
    for(ll i=0; i<s.size()/2; i++)
    {
        if(s1[i]!=s[i])c++;
    }
    cout<<c;
}
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    solve();
    return 0;
}