#include <bits/stdc++.h>
using namespace std;
const int N=1e+6;
int n,m;
int a[N],b[N];
int cnt=1;
int i;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int u=1;u<=n;u++){
		cnt=u;
		for(int i=u;i<=n;i++){
			for(int j=cnt;j<i;j++){
				if(a[j]==a[i]){
					cnt=i;
				}
			}
		}
		for(int k=cnt;k<=n;k++){
			b[a[k]]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
