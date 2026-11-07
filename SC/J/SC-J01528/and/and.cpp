#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,a[200005],bz,b[200005],cnt,sl,ans;
ll mc(int a){
	int pos=1;
	while(a--)pos*=2;
	return pos;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=32;i>=0;i--){
		cnt=0;
		bz=mc(i);
		for(int j=1;j<=n;j++){
			if(a[j]>=bz)cnt++;
		}
		if(cnt>=m)break;
	}
	for(int i=1;i<=n;i++){
		if(a[i]>=bz){
			b[++sl]=a[i];
		}
	}
	sort(b+1,b+1+sl,cmp);
	ans=b[1];
	for(int i=2;i<=m;i++){
		ans&=b[i];
	}
	cout<<ans;
	return 0;
}
