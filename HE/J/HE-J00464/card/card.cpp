#include<bits/stdc++.h>
using namespace std;
const int N=5e5+33,M=3e5+33;
int n,m,a[N],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]); 
	for(int i=1;i<=n;i++){
		int r=0,crd[N];
		bool flag[M];
		memset(flag,false,sizeof(flag));
		
		for(int j=i;j<=n;j++){
			if(flag[a[j]]){
				int x;
				for(int k=1;k<=r;k++){
					if(a[k]==a[j]){
						x=k;
						break;
					}
				}
				for(int k=x+1;k<=r;k++){
					flag[crd[k]]=false;
					crd[k]=0;
				}
				r=x;
			} 
			else{
				crd[++r]=a[j];
				flag[a[j]]=true;
			}
		}
		for(int j=1;j<=r;j++)ans[crd[j]]++;
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}
