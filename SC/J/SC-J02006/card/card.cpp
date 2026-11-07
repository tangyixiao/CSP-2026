#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10; 
int n,m,a[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	for(int i=1;i<=n;++i){
		bool b[m+1];
		for(int o=1;o<=m;++o) b[o]=0;
		for(int j=i;j<=n;++j){
			int k=a[j];
			if(b[k]==1){
				bool flag=0;
				for(int l=i;l<j;++l){	
					if(a[l]==k) flag=1;
					if(flag) b[a[l]]=0;
				}
			}	    
			b[k]=1;
		}
		for(int o=1;o<=m;++o)
			if(b[o]==1) ans[o]++;
	}
	for(int p=1;p<=m;++p){
		cout<<ans[p]<<' ';
	}
	return 0;
} 