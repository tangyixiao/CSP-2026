#include<bits/stdc++.h>
using namespace std;
int a[500005],b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=0,m=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int l=a[i];
		b[l]+=1;
	}
	for(int i=m;i>=1;i--){
		if(b[i]!=0){
			cout<<i<<" ";
		}
	}
	return 0;
}
