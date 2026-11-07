#include <bits/stdc++.h>
using namespace std;
int n,m,c[500005],d[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	for(int i=1;i<=n;i++){
		int p[500005]={},psl=1;
		for(int j=i;j<=n;j++){
			int f=0;
			for(int k=1;k<=psl;k++){
				if(p[k]==c[j]){
					f=1;
					for(int l=k+1;l<=n;l++){
						if(p[l]!=0) psl--;
						p[l]=0;
					}
					break;
				}
			}
			if(!f){
				p[psl]=c[j];
				psl++;
			}
		}
		for(int j=1;j<=n;j++){
			d[p[j]]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<d[i]<<" "; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
