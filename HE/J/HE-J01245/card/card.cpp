#include <bits/stdc++.h>
using namespace std;
int a[300005];
int b[500005]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long cnt=0;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		b[i]=x;
	}for(int i=1;i<=m;i++)
		cout<<0<<" ";
	return 0;
} 
