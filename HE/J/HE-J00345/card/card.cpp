#include<bits/stdc++.h>
using namespace std;
int a[500005];
int c[500005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int b[500005];
		int cnt=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=cnt;k++){
				if(a[j]==b[k]){
					cnt=k-1;
				}
			}
			cnt++;
			b[cnt]=a[j];
		}
		for(int j=1;j<=cnt;j++){
			c[b[j]]++;
		}
	}
	for(int i=1;i<=n;i++){
		if(c[i]!=0){
			cout<<c[i]<<" ";
		}
	}
	return 0;
}

