#include <bits/stdc++.h>
using namespace std;
long long h[1000000],n,m,c[100000],d[100000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>h[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(d[h[j]]!=0){
				for(int r=d[h[j]];r<j;r++){
					
					if(d[h[r]]!=0){
						c[h[r]]--;
					}
					d[h[r]]=0;

				}
			}
			d[h[j]]=j;
			c[h[j]]++;
		}
		for(int j=1;j<=m;j++){
			d[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0; 
}