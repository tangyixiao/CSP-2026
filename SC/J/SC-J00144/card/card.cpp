#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],p,t,b[500000];
long long c[30000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	for (int i=1;i<=n;i++){
		p=0;
		for (int j=i;i<=n;j++){
			p++;
			if (j==i) {
				b[p]=a[j];
		}
			else{
				for (int o=i;o<j;o++){
					if (a[o]==a[j]){
						break;
						p=1;
						b[p]=a[o];
					}
				}
			}
		}
		for (int w=1;w<=p;w++){
			c[b[w]]++;
		}
	}
	for (int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
