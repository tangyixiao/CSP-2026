#include<bits/stdc++.h>
using namespace std;
int b,c,d,n,m;
int a[100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		for(int p=1;p<=n;p++){
			if(p==1){
				p=p+(i-1);
			}
			cin>>a[p];
			for(int o=1;o<=p;o++){
				if(a[p]==a[o]){
					for(int u=1;u<=o;u++){
						a[u]=0;
					}
					p=o;
					break;
				}
			}
		}
		int b=0;
		for(int t=1;t<=n;t++){
			if(a[t]==i){
				b++;
			}
		}
		cout<<b<<" ";
	}
	return 0;
	}
