#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,z;
	cin>>n>>m;
	int a[1010];
	int k;
	int b[1010];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
		if(a[i]==k){
			b[j]++;
  }
  cout<<b[j];
		}

	}
	return 0;
}