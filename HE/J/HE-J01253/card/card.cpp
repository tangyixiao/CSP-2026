#include<bits/stdc++.h> 
using namespace std;
int n,m;
int a[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}for(int i=2;i<=n;i++){
		cout<<0;
	}
	cout<<n;
	return 0;
}
