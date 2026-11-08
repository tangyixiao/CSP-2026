#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll n,ans,sum;
bool p=1;
struct node{
	ll a;
	char s;
}m[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>m[i].a>>m[i].s;
	for(int i=2;i<=n;i++)
		if(m[i].s!=m[i-1].s)
			p=0;
	if(p){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++)
		sum+=m[i].a;
	if(sum%2){
		for(int i=1;i<=sum/2;i++){//第i个和sum-i+1个 
			ll pp=1;
			char gh,hg;
			for(int j=1;j<=n;j++){
				if(i>=p&&i<p+m[i].a)
					gh=m[j].s;
				if(sum-i+1>=p&&sum-i+1<p+m[i].a)
					hg=m[j].s;
				p+=m[i].a;
			} 
			if(gh!=hg)
				ans++;
		}
	}
	cout<<ans;
	return 0;
}
