#include<bits/stdc++.h>
using namespace std; 
long long n,m,a[100005],b=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<=n;j++){
			if(a[j]==i+1){
				cout<<j-1-b<<' ';
				b=j-1;
				break;
			}
		}
	}
	cout<<n-b;
	return 0;
}
