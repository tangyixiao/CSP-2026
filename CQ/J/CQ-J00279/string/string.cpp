#include<bits/stdc++.h>
#define int long long
#define N 200005
using namespace std;

int n;

int a[N];

char c[N];

int h,t,ans;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	t=n-1;
	for(int i=0;i<n;i++) cin>>a[i]>>c[i];
	for(int i=0;i<n;i++){
		if(h>t) break;
		if(a[h]>a[t]){
			if(c[h]!=c[t]) ans+=a[t];
			a[h]-=a[t];
			t--;
		}else if(a[h]<a[t]){
			if(c[h]!=c[t]) ans+=a[h];
			a[t]-=a[h];
			h++;
		}else {
			if(c[h]!=c[t]) ans+=a[t];
			t--;
			h++;
		}
	}
	cout<<ans;
	return 0;
}
