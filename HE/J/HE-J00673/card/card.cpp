#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n;
int a[100005];
int c[100005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(c[j]==a[i]){
				for(int k=1;k<=c[j]-1;k++){
					c[k]=0;
				}
				c[j]=a[i];
			}
			else{
				c[j]=a[i];
			}
		}
		for(int j=1;j<=n;j++){
			for(int k=1;k<=c[j]-1;k++){
				if(a[j]==c[k]){
					sum++;
				}
			}
		}
		cout<<sum;
	}
}
