#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int a[N];
int mapp[N];
int ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			flag=1;
		}
	}if(!flag){
		int q[10001]={};
		int key=1;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				q[key++]=i;
			}
		}for(int i=1;i<=m;i++){
			cout<<q[i]<<' ';
		}return 0;
	}
	int k=1;
	for(int i=k;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(mapp[a[j]]){
				for(int k=mapp[a[j]];k<j;k++){
					mapp[a[k]]=0;
				}
			}
			mapp[a[j]]=j;
		}
		for(int j=1;j<=m;j++){
			if(mapp[j]){
				ans[j]++;
			}mapp[j]=0;
		}
		k++;
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
