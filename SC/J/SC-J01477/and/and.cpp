#include<bits/stdc++.h>
using namespace std;
long long a[200005],s[200005][35],vis[200005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		vis[i]=1;
		for(long long j=0;j<=31;j++){
			if((1<<j)&a[i]){
				s[i][j]=1;
			}
		}
	}
	long long an=0;
	for(long long i=31;i>=0;i--){
		long long cnt=0;
		for(long long j=1;j<=n;j++){
			if(s[j][i]&&vis[j]){
				cnt++; 
			}
		}
		if(cnt>=m){
			an+=(1<<i);
			for(long long j=1;j<=n;j++){
				if(s[j][i]==0){
					vis[j]=0;
				}
			}
		}
	}
	cout<<an;
	return 0;
}
//代码敲慢一点！！！
//注意freopen
//注意数组大小
//注意函数返回值
//注意取模
//40


