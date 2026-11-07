#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	ll ans=0;
	int l=1,r=n;
	while(l<r){
			if(a[l]>a[r]){
				int tr=r,tl=l;
				a[l]-=a[r];
				r--;
				if(c[tl]!=c[tr])ans+=a[tr];
			}
			else if(a[l]<a[r]){
				int tr=r,tl=l;
				a[r]-=a[l];
				l++;
				if(c[tl]!=c[tr])ans+=a[tl];
			}
			else if(a[l]==a[r]){
				int tr=r,tl=l;
				l++,r--;
				if(c[tl]!=c[tr])ans+=a[tr];
			}
	}
	cout<<ans;
	return 0;
}