#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],b[300005],num[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int ma=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	if(ma==a[n-1]){
		for(int i=0;i<n;i++){
			cout<<m<<' ';
			m--;
		}
	}
	return 0;
}