#include<bits/stdc++.h>
using namespace std;
const int N=500009;
int a[N],n,m,b[N];
void check(){
	for(int i=1;i<=n;i++){
		if(a[i]!=a[n]){
			b[1]++;
			b[2]++;
		}
		else
		{
			b[a[i]]++;
		}
	}
	for(int i=1;i<m;i++){
		cout<<b[i]<<" ";
	}
	cout<<b[m];
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2){
		check();
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i]<=j){
				b[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	cout<<b[m];
}
