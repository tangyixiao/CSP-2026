#include<bits\stdc++.h> 
using namespace std;
int ans[300005],a[500005],c[500005],cnt[500005];
int main()
{
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=n;i>=1;i--){
    	if(!cnt[a[i]]){
    		cnt[a[i]]=i;
    		c[i]++;
		}
		else {
			for(int j=i+1;j<cnt[a[i]];j++)cnt[a[j]]=0;
			c[cnt[a[i]]]++;
			c[i]--;
			continue;
		}
	}

	for(int i=2;i<=n;i++){
		c[i]=c[i-1]+c[i];
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]+=c[i];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}