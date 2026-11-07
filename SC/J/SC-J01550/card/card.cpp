#include<bits/stdc++.h>
using namespace std;
int a[500001],b[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int p[500001],q[500001];
		memset(q,sizeof(q),0);
		int t=0;
		for(int j=i+1;j<=n;j++){
			if(q[a[j]]==0){
				t++;
				p[t]=a[j];
				q[a[j]]++;
			}else{
				t=j+1;
				p[j+1]=a[j];
				q[a[j]]++;
			}
			
		}
		for(int j=1;j<=n;j++){
			if(q[j]!=0){
				b[j]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	return 0;
}
/*4 3
1 2 1 3*/
