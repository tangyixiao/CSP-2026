#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> a(n+5,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=29;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(((a[j]>>i)&1)==1){
				cnt++;
			}
		}
		if(cnt>=m){
			ans|=(1<<i);
			for(int j=1;j<=n;j++){
				if(((a[j]>>i)&1)!=1){
					a[j]=0;
				}
			}
		}
	}
	cout<<ans;

	return 0;
}
/*
4 2
3 15 12 12
5 3
31 3 1 15 7
*/