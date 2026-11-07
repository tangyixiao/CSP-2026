#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],last[300005],d[500005],ans[300005];
int same_pair[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(last[a[i]]!=0){
			same_pair[last[a[i]]]=i;
			//cout<<last[a[i]]<<"  "<<same_pair[last[a[i]]]<<"\n";
		}
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(d[i])continue;
		int bit=1;
		vector<int>lit(m);
		int j=i;
		d[1]=1;
		while(j<=n){
			lit[a[j]]=max(lit[a[j]],bit);
			if(same_pair[j]!=0){
				//cout<<j<<" "<<same_pair[j]<<"\n";
				j=same_pair[j];
				if(d[j]==0)bit++;
				d[j]=1;
			}else{	
				j++;
				if(d[j]==0&&j<=n)bit++;
				d[j]=1;
			}
		}
		for(int i=1;i<=m;i++){
			if(lit[i]!=0)ans[i]+=lit[i];
		}
		//cout<<i<<":i\n";
		//for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
		//cout<<"\nbit:";
		//cout<<bit<<"\n";
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} //10 3 3 1 2 1 3 2 3 1 2 1
//AK CSP
