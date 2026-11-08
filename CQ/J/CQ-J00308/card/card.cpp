#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[300005];
long long q[300005],z[300005],zz[300005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		z[a[i]]=i;
	}
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;){
				zz[a[j]]++;
				if(z[a[j]]){
					j=z[a[j]]+1;
				}
				else{
					j++;
				}
			}
		}
	for(int i=1;i<=m;i++){
		cout<<zz[i]<<" ";
	}
	return 0;
}
