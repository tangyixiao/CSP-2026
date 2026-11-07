#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,m,a[maxn],h[40],used[40][maxn],len[40],pos=-1,maxx=40;
bool ok[maxn];
long long ans;
int main(){
	//freopen
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==n){
		ans=a[1];
		for(int i=1;i<=n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	while(n>m){//<=31 times
		memset(len,0,sizeof(len));
		memset(h,0,sizeof(h));
		pos=-1;
		for(int i=1;i<=n;i++){
			int t=a[i],cnt=0;
			while(t){
				if(t&1)h[cnt]++,used[cnt][++len[cnt]]=a[i];
				t/=2;
				cnt++;
			}
		}
		for(int i=maxx;i>=0;i--){
			if(h[i]>=m){
				pos=i;
				maxx=i-1;
//				for(int j=1;j<=len[i];j++)ok[used[i][j]]=1;
				break;
			}
		}
		if(pos==-1){
			break;
		}
		n=len[pos];
		for(int i=1;i<=n;i++){
			a[i]=used[pos][i];
		}
	}
//	for(int i=1;i<=n;i++)cout<<a[i]<<' ';
	ans=a[1];
	for(int i=1;i<=n;i++)ans&=a[i];
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7
*/
