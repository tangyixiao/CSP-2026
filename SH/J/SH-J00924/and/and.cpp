#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005][32];
int b[32],cnt[32];
long long c[200005];
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		c[i]=x;
	}
	sort(c+1,c+1+n,cmp);
	for(int i=1;i<=n;i++){
		int idx=1;
		long long x=c[i];
		while(x!=0){
			a[i][idx]=x&1;
			x/=2;
			idx++;
		}
		a[i][0]=idx-1;
	}
	
	while(true){
		memset(cnt,0,sizeof(cnt));
		for(int i=1;i<=n;i++){
			bool flag=false;
			for(int j=1;j<=31;j++){
				if(a[i][j]<b[j]){
					flag=true;
					break;
				}
			}
			if(flag)continue;
			for(int j=1;j<=a[i][0];j++)cnt[j]+=a[i][j];
		}
		bool f=true;
		for(int j=31;j>0;j--){
			if(cnt[j]>=m&&b[j]==0){
				b[j]++;
				f=false;
				break;
			}
		}
		if(f)break;
	}
	long long ans=0;
	for(int i=31;i>0;i--){
		ans*=2;
		ans+=b[i];
	}
	cout<<ans;
	return 0;
}
