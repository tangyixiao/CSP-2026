#include<iostream> 
using namespace std;
int n,m;
int a[100001],b[300001];
bool c[100001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c[j]=1;
			for(int x=i;x<j;x++){
				if(a[x]==a[j]){
					for(int y=x;y<j;y++){
						c[y]=0;
					}	
				}
			}	
		}
		for(int z=i;z<=n;z++){
			if(c[z]){
				b[a[z]]+=1;
			}
		}	
	}
	for(int z=1;z<=m;z++){
		if(b[z]!=0){
			cout<<b[z]<<" ";
		}	
	}
	return 0;	
}