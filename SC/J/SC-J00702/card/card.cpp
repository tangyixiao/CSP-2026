#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10; 
int n,m;
int a[N];
bool f[N];
string s;
int p[N],idx;
int cnt[N];
int c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			if(a[n]==a[i]){
				cnt[a[n]]++;
			}else{
				cnt[1]++;
				cnt[2]++; 
			}
		}
	}else if(n<=500){
		for(int i=1;i<n;i++){
			memset(f,false,sizeof(f));
			for(int j=i;j<=n;j++){
				if(f[a[j]]==false){
					f[a[j]]=true;
					c[++idx]=a[j];
					p[a[j]]=idx;
				}else{
					for(int k=p[a[j]];k<=idx;k++) f[a[k]]=false;
					f[a[j]]=true;
					idx=p[a[j]];
					c[idx]=a[j];
					p[a[j]]=idx;
				}
			}for(int j=1;j<=m;j++){
				if(f[j]==true) cnt[j]++;
			}
		}
		cnt[a[n]]++;
	}else{
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				cnt[a[i]]=i;
			}
		}
	}for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
} 