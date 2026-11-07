#include<cstdio> 
#include<iostream>
using namespace std;
int a[500005],u[300005],u2[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(u[a[j]]==0){
				u[a[j]]=1;
			}else{
				for(int k=j-1;a[k]!=a[j];k--){
					u[a[k]]=0;
				}
			}
		}
		for(int x=1;x<=m;x++){
			if(u[x]!=0){
				u2[x]++;
			}
		}
		for(int j=1;j<=m;j++){
			u[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<u2[i]<<" ";
	}
	return 0;
}

