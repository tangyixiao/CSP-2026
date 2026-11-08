#include <bits/stdc++.h> 
using namespace std;
int a[100000010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i;i<=n;i++){
		cin >> a[i];
	}
	for(int i;i<=n;i++) {
		for(int j=1;j<=i;j++){
			if(a[i]==a[j]){
				
			}
		}
	}
	return 0;
}
