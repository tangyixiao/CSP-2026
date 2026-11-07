#include<bits/stdc++.h>
using namespace std;
int arr[3086];
int brr[3086];
int hy[3086];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>arr[i];
	}
	for(int j=1; j<=n; j++) {
		hy[arr[j]]++;
	}
	for(int i=1; i<=m; i++) {
		cout<<hy[i]<<" ";
	}
	return 0;
}
//Trick||Treat!
