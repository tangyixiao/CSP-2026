#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int d[n];
	for(int i=0;i<n;i++){
		cin>>d[i]; 
	}
	cout<<m<<d[0]<<n;
	return 0;
}
