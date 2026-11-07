#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005],p[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i){
		char t;
		cin>>a[i]>>t;
		p[i]=t-'a'+1;
	}
	long long cnt=0;
	int l=1,r=n;
	while(l<r){
		if(a[l]>=a[r]&&p[l]!=p[r]){
			cnt+=a[r];
			a[l]-=a[r];
			r--;
		}
		if(a[l]<a[r]&&p[l]!=p[r]){
			cnt+=a[l];
			a[r]-=a[l];
			l++;
		}
		if(a[l]>=a[r]&&p[l]==p[r]){
			a[l]-=a[r];
			r--;
		}
		if(a[l]<a[r]&&p[l]==p[r]){
			a[r]-=a[l];
			l++;
		}
	}
	cout<<cnt;
	return 0;
}