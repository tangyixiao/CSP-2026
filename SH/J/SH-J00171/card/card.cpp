#include<bits/stdc++.h>
#define int long long
using namespace std;
const int INF=10000000005;
int a[500005],lst[500005];
int ans[500005];
int aan[500005];
int dl[500005];
int cnt1[500005];
vector<int> ls[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n<=500){
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				aan[j]=INF;
				lst[j]=-1;
			}
			for(int j=i;j<=n;j++){
				aan[a[j]]=min(aan[a[j]],j);
				if(lst[a[j]]==-1){
					lst[a[j]]=j;
					continue;
				}
				for(int k=1;k<=m;k++)
					if(k!=a[j])
						if(aan[k]>=lst[a[j]]){
							aan[k]=INF;
							lst[k]=-1;
						}
				lst[a[j]]=j;
			}
			for(int j=1;j<=m;j++)
				if(aan[j]!=INF)
					ans[j]++;
		}
	}
	else{
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				ls[i].push_back(300004);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				ls[j][0]=-1;
				cnt1[j]=0;
				dl[j]=300004;
			}
			int cnt=1;
			for(int j=i;j<=n;j++){
				dl[cnt]=a[j];
				if(ls[a[j]][cnt1[a[j]]]==-1){
					ls[a[j]][cnt1[a[j]]++]=cnt;
					cnt++;
				}
				else{
					while(ls[a[j]][cnt1[a[j]]-1]>cnt&&cnt1[a[j]]>0)
						cnt1[a[j]]--;
					if(cnt1[a[j]]==0){
						ls[a[j]][cnt1[a[j]]++]=cnt;
						cnt++;
					}
					else{
						cnt=ls[a[j]][cnt1[a[j]]-1];
						cnt++;
					}
				}
			}
			for(int j=1;j<cnt;j++)
				ans[dl[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
