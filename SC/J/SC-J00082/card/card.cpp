#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,c=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		for(int j=1;j<=i;j++){
			if(a[i]==a[j]){
				for(int z=i;z<=j;z++){
					a[z]=0;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j]==i){
				c++;
			}
			cout << c <<" ";
		} 
	}
	return 0;
}