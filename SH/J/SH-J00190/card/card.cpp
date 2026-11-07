#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010];
int cnt[300010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(int k=1;k<=n;k++){
		cnt[a[k-1]]--;
		int cnt2[m+1],ans2[m+1];
		for(int i=1;i<=m;i++)cnt2[i]=cnt[i],ans2[i]=0;
		
		for(int i=k;i<=n;i++){
			if(cnt2[a[i]]>1){
				cnt2[a[i]]--;
				int j=a[i];
				ans2[j]=1;
				i++;
				for(;i<=n;i++){
					if(a[i]==j){
						break;
					}else{
						cnt2[a[i]]--;
					}
				}
				i--;
			}else if(cnt2[a[i]]>0){
				ans2[a[i]]=1;
			}
		}
		
		for(int i=1;i<=m;i++)ans[i]+=ans2[i];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
