#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,a[1000001];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=i;j<=n;j++){
			for(int s=j;s<=n;j++){
				if(a[j]==a[s]){
					
				}
			}
		}
	}
	return 0;
} 
