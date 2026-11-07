/*
O(mn):yuji 56+5 fen
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+5,0),ans(m+5,0);
	vector<int> b(m+5,0);//记录这个数出现的最后一个地方 
	bool f=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=i;
		if(a[i]<a[i-1]){
			f=0;
		}
	}
	if(f||m==n){
		for(int i=1;i<=m;i++){
			cout<<b[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		while(j<=n){
			j=b[a[j]];
			ans[a[j]]++;
			j++;
		}
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}


	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

4 3
1 2 1 3

5 3
1 1 2 2 3
*/