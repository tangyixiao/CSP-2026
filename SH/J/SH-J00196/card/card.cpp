#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=m;i++){
		int sum=0;
		for(int j=1;j<=n;j++){
			for(int z=j;z<=n;z++){
				if(a[z]==i){
					sum++;
					break;
				}
			} 
		}
		cout <<sum<<' ';
	}
	return 0;
}
