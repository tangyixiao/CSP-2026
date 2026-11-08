#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=a[i];j<=m;j++){
			ans[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
