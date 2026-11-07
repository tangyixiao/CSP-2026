#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N=2e5+5;
struct{
	ll x,y;
	char s;
}a[N];
int main(){
	freopen("sting.in","r",stdin);
	freopen("sting.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,ans=0,l=1,x,cnt=1,end;
	string s;
	cin>>n;
	end=n;
	for(ll i=1;i<=n;i++){
		a[i].x=l;
		cin>>x>>a[i].s;
		l+=x-1;
		a[i].y=l;
		l++;
	}
	l--;
	ll i=1;
	while(i<=(l+1)/2){
		while(i>a[cnt].y)cnt++;
		while(l-i+1<a[end].x)end--;
		if(cnt==n||end==1)break;
		ll num=min(a[cnt].y-i+1,(l-i+2-a[end].x));
		if(a[cnt].s!=a[end].s)ans+=num;
		i+=num;
	}
	cout<<ans;
	return 0;
}