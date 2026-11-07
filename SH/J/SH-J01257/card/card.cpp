#include<bits/stdc++.h>
using namespace std;
const int N=5e5,M=3e5;
int a[N],b[M],s[N],loc[M],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k=1;cin>>n>>m;
	for(int i=1;i<=n;++i)cin>>a[i];
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(!loc[a[j]]){
				loc[a[j]]=k;
				s[k]=a[j];
				k++;
			}
			else{
				k=loc[a[j]];
				for(int i=1;i<=m;++i){
					if(loc[i]>i)loc[i]=0;
				}
				k++;
			}
		}
		for(int i=1;i<k;++i)ans[s[i]]++;
		k=1;
		memset(loc,0,sizeof(loc));
		memset(s,0,sizeof(s));
	}
	for(int i=1;i<m;++i)cout<<ans[i]<<" ";
	cout<<ans[m];
	fclose(stdin);fclose(stdout);
	return 0;
} 
