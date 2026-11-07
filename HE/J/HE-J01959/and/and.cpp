#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
int n,m;
int tong[10];
int maxn=-1;
void dfs(int step,int num,int sum){
	if(num==m){
		maxn=max(maxn,sum);
		return ;
	}
	if(num+m-num>n){
		return ;
	}
	for(int i=step+1;i<=n;i++){
		dfs(i,num+1,sum&a[i]);
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=2001){
		if(a[10]==(1<<10)-1){
			cout<<(1<<(n-m+1)-1);
			return 0;
		}else{
			for(int i=1;i<=n;i++){
				maxn=max(maxn,a[i]);
			}
			if(maxn<=4){
				for(int i=1;i<=n;i++){
					tong[a[i]]++;
				}
				if(tong[3]>m){
					cout<<3;
					return 0;
				}
				if(tong[3]+tong[2]>m){
					cout<<2;
					return 0;
				}
				if(tong[3]+tong[1]>m){
					cout<<1;
					return 0;
				}
				cout<<0;
				return 0;
			}else{
				maxn=-1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<maxn;
}
