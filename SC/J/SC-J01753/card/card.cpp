#include<bits/stdc++.h>
using namespace std;
int n,m,c[500010],ans[200010];
bool b[200010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	if(n<=500&&m<=200){
		for(int i=1;i<=n;i++)cin>>c[i];
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(b[c[j]]){
					int xxx;
					for(int k=i;k<=j;k++)
						if(c[j]==c[k]){xxx=k;break;}
					for(int k=xxx;k<=j;k++)
						b[c[k]]=!b[c[k]];
					b[c[j]]=0;
				}else b[c[j]]=1;
			}
			for(int j=1;j<=m;j++){
				if(b[j])ans[j]++;
				b[j]=0;
			}
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}else if(m==1){
		if(n&1)cout<<n/2+1;
		else cout<<n/2;
	}else{//7-9(A)
		for(int i=n;i>=1;i--)
			cin>>c[i];
		for(int i=1;i<=n;i++){
			b[c[i]]=!b[c[i]];
			for(int j=1;j<=m;j++){
				if(b[j])ans[j]++;
			}
		}for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
}