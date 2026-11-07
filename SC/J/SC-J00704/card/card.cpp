#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k;
int a[500010];
int b[500010];
int c[500010];
int ans[500010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		k=0;
		for(int j=i;j<=n;j++){
			k++;
			if(b[a[j]]!=0){
				for(int q=b[a[j]]+1;q<=k;q++){
					k--;
					b[c[q]]=0;
					c[q]=0;
				}
				c[k]=a[j];
				b[a[j]]=k;
			}
			else{
				c[k]=a[j];
				b[a[j]]=k;
			}
		}
		for(int j=1;j<=m;j++){
			if(b[j]!=0){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
€€CcCcCcCcFfFf£
最后是orz？
qwq
look at uid:1102002
lglg!
*/