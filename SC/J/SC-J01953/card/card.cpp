#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
const int M=3e3+10;
int a[N],cnt[M];
int n,m;
int flag[M];
void solve(){
	int flag=1;
	for(int i=1;i<n;i++){
		if(a[i]>a[i+1]){
			flag=0;
			break;
		}
	}
	if(flag==1){
		for(int i=1;i<=n;i++){
			for(int k=a[i];k<=m;k++){
				cnt[k]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
		}
		return ;
	}
	return ;
} 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n>=2000){
		solve();
		return 0;
	}
	for(int i=1;i<=n;i++){
		memset(flag,0,sizeof(flag));
		for(int j=i;j<=n;){
			int flag1=1;
			for(int k=j+1;k<=n;k++){
				if(a[k]==a[j]){
					j=k;
					flag1=0;
					break;	
				}
			}
			flag[a[j]]=1;
			if(flag1==1)j++;
		}
		for(int i=1;i<=m;i++){
			cnt[i]+=flag[i];
			cout<<flag[i]<<" ";
		}
		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}