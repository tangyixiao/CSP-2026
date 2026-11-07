#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","w",stdout);
	freopen("card.out","r",stdin);
	int n,m;
	cin>>n>>m;
	int a[1001],b[1001]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int s=0;
	int cnt=1;
	for(int i=cnt;i<=n;i++){
		cnt++;
		if(!b[a[i]]){
			b[a[i]]++;
		}
		else {
			for(int j=1;j<=i;j++){
				a[i]=0;
			}
			s=i;
		}
		for(int i=s;i<=n;i++)b[a[i]]++;
	}
	for(int i=m;i>=1;i--){
		cout<<b[i]<<" ";
	}
	return 0;
}
