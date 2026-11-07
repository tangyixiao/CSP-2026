#include<bits/stdc++.h>
using namespace std;
int n,a[500005],m,q[300005],id[300005],s[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(q,-1,sizeof(q));
	memset(id,-1,sizeof(id));
	for(int i=1;i<=n;i++){
		int k=a[i];
		if(q[k]==-1) q[k]=i;
		else{
			id[q[k]]=i;
			q[k]=i;
		}
	}
	for(int i=1;i<=n;i++){
		bool h[300005]={0};
		memset(h,false,sizeof(h));
		int j=i;
		while(j<=n){
			while(id[j]!=-1){
				j=id[j];
			}
			h[a[j]]=true;
			j++;
		}
		for(int o=1;o<=m;o++){
			if(h[o]) s[o]++; 
		}
	}
	for(int i=1;i<=m;i++) cout<<s[i]<<" ";
}
