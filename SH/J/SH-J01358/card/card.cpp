#include<bits/stdc++.h>
using namespace std;
int a[500005];
int r[500005];
int b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=0;
		memset(r,0,sizeof(r));
		for(int j=i;j<=n;j++){
			int x=0;
			for(int k=1;k<=n;k++){
				if(r[k]==a[j]){
					x=k;
					break;
				}
			}
			if(x==0){
				r[++cnt]=a[j];
			}else{
				for(int k=x;k<=n;k++){
					r[k]=0;
				}
				cnt=x-1;
				r[++cnt]=a[j];
			}
		}
		for(int j=1;j<=n;j++){
			b[r[j]]++; 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
