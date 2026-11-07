#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[300005],c[500005],ans[300005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int top;
	for(int i=1;i<=n;i++){
		top=0;
		memset(c,0,sizeof(c));
		memset(b,0,sizeof(b));
	    for(int j=i;j<=n;j++){
	    	if(b[a[j]]==0||c[b[a[j]]]!=a[j]){
	    		top++,b[a[j]]=top,c[top]=a[j];
			}
			else if(b[a[j]]<=top){
				for(int k=b[a[j]]+1;k<=top;k++)
				    c[k]=0;
				top=b[a[j]];
			}
	    }
	    for(int j=1;j<=m;j++)
	        if(b[j]>0&&b[j]<=top&&c[b[j]]==j)
	            ans[j]++;
	}
	for(int i=1;i<=m;i++)
	    cout<<ans[i]<<' ';
	return 0;
}
