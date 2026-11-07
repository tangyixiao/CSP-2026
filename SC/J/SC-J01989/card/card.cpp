#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],lie[500001],cs[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int wei=0;
		for(int j=i;j<=n;j++){
			int bj=0;
			for(int k=1;k<=wei;k++){
				if(a[j]==lie[k]){
					bj=k;
					break;
				}
			}
			if(bj!=0){
				wei=bj-1;
			}
			lie[++wei]=a[j];	
		}
		for(int j=1;j<=wei;j++){
			cs[lie[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cs[i]<<" ";
	}
	return 0;
}