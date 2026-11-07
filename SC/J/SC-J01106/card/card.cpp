#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int num[n+1],pl[n+1],p;
	for(int i=1;i<=n;i++){
		num[i]=0;
	}
	for(int i=1;i<=n;i++){
		p=1;
		for(int j=i;j<=n;j++){
			pl[p]=a[j];
			p++;
			for(int q=1;q<p-1;q++){
				if(pl[q]==pl[p-1]){
					p=q+1; 
				}
			}
		}
		for(int j=1;j<p;j++){
			int y=pl[j];
			num[y]++;
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	return 0;
}