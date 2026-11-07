#include<bits/stdc++.h>
using namespace std;
int a[500005];
int b[300001];
int c[500005];
int d[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int head;
	for(int i=1;i<=n;i++){
		head=i;
		for(int j=i;j<=n;j++){
			if(b[a[j]]==1){
				head--;
				while(c[head]!=a[j]){
					b[c[head]]=0;
					c[head]=0;
					head--;
				}
				head++;
			}else{
				c[head]=a[j];
				head++;
				b[a[j]]++;
			}
		}
		
		for(int j=1;j<=m;j++){
			b[j]=0;
		}
		for(int j=i;j<=head;j++){
			d[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<d[i]<<" ";
	}
}

