#include<bits/stdc++.h>
using namespace std;
const int N=5e5+1,M=3e5+1;
int a[N],n,m,b[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	int t=n;
	for (int i=1;i<=m;i++){
		t-=b[i-1];
		cout<<t<<" ";
	}
	return 0; 
}