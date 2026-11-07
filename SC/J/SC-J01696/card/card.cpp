#include<bits/stdc++.h>
using namespace std;
long long m,n,a[50000005],tree[50000005],head=0,record2[30000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		head=0;
		memset(tree,0,sizeof(tree));
		for(int j=i;j<=n;j++){
			tree[++head]=a[j];
			for(int t=1;t<=head;t++){
				if(tree[t]==a[j]){
					head=t-1;
					tree[++head]=a[j];
					break;
				}			
			}
		}
		for(int j2=1;j2<=head;j2++){
			record2[tree[j2]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<record2[i]<<" ";
	}
}