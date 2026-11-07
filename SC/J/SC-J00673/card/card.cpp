#include <bits/stdc++.h>
using namespace std;
int const N=5e5+10;
int n,m,a[N];
int vis[N];
string h;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int q=n,sum=0,k;
	bool flag=0;
	while(q--){
		sum++;
		for(int i=sum;i<=n;i++){
			k=0;
			flag=0;
			for(int j=i+1;j<=n;j++){
				if(a[i]==a[j]){
					flag=1;
					k=j;
				}
			}
			if(flag==1){
				vis[a[i]]++;
				i=k;
			}
			if(flag==0){
				vis[a[i]]++;
			} 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<vis[i]<<" ";
	}
    return 0;
}
