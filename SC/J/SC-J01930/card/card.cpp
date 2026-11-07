#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],cnt[M],now[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	int len=0,flag=1;
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			for(int k=1;k<=len;++k){
				if(now[k]==a[j]){
					flag=k;
					len=flag-1;
					break;	
				}
			}
			now[flag]=a[j];
			n++;
			flag++;
			for(int k=1;k<=len;++k){
				if(now[k]==i){
					cnt[i]++;
					break;	
				}
			}
		}
	}
	for(int i=1;i<=m;++i)cout<<cnt[i]<<' ';
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 