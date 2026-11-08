#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],p[200005][30],mx,cnt[2][200005],mz[30],ans;  //cnt i表示第i个满足那一位为1的 
void dt(long long l,long long jg,long long xx){
	long long cc=0;
	if(l<=0) return;
	for(long long i=l;i>=0;i--){
		cc=0;
		for(long long j=1;j<=jg;j++){
			if(p[cnt[xx&1][j]][i]==1){
				cc++;   //统计第i位满足的数量 
				cnt[(xx+1)&1][cc]=cnt[xx&1][j];
			}
		}
		if(cc<m){   //小于就继续查找 
			continue;
		}else{     //如果大于就把第i位满足的提出来继续比
			mz[i]=1;
			dt(i-1,cc,(xx+1)&1);
			break;
		}
	}
}
//10010

//4 2 5
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		long long q=a[i],ct=0;
		while(q){
			ct++;
			p[i][ct]=q&1;
			q>>=1;
		}mx=max(mx,ct);
	}
//	for(long long i=1;i<=n;i++){
//		for(long long j=mx;j>0;j--){
//			cout<<p[i][j];
//		}cout<<'\n';
//	}
	for(long long i=1;i<=n;i++) cnt[0][i]=i;
	dt(mx,n,0);
	for(long long i=1;i<=mx;i++){
		if(mz[i]) ans+=1<<i-1;
	}
	cout<<ans;
	return 0;
}
//4 2
//3 15 12 12
