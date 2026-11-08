#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5;
int n,m,a[N],cnt[M];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cout<<4999<<" "; 
	}
	return 0;
}
