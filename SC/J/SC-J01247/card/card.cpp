#include<bits/stdc++.h>
using namespace std;
int ans[300005];
int a[500005];
int b[300005];
int s[300005],k=0;
bool d[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	for(int i=1;i<=n;i++){
		k=0;
		memset(s,0,sizeof(s));
		for(int j=i;j<=n;j++){
			if(!s[a[j]]||s[a[j]]>k){
				b[++k]=a[j];
				s[a[j]]=k;
			}    
			else{
				k=s[a[j]];
				b[k]=a[j];
			}	    
		}
		for(int j=1;j<=k;j++){
			ans[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	    cout<<ans[i]<<" ";
	return 0;
}