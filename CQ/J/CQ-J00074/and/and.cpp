#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+100;
int a[N];
int mapp[100];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	mapp[1]=1;
	for(int i=2;i<=30;i++){
		mapp[i]=mapp[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	int ans=0;
	for(int i=30;i>=1;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(mapp[i]>a[j])break;
			cnt++;
			a[j]-=mapp[i];
		}
		if(cnt>=m){
			ans+=mapp[i];
			n=cnt;
		}
		sort(a+1,a+1+n,cmp);
	}
	cout<<ans;
}

