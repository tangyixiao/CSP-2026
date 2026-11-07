#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1],ans[m+1],p[n+1];
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		p[i] = 0;
	}
	
	for(int i = 1;i <= m;i++){
		ans[i] = 0;	
	}
	
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			int r = j;
			while(r <= n){
				for(int k = 1;k < r;k++){
					if(p[k] == a[r]){
						r = k+1;
						break;
					}
				}
				p[r] = a[r];
				r++;
			}
			for(int k = 1;k < r;k++){
				ans[p[k]]++;
			}
		}
	}
	for(int i = 1;i <= m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
