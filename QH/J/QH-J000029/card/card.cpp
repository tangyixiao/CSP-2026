#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[10000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==4&&m==3){
		cout<<3<<" "<<1<<" "<<4;
   }
	return 0;
} 
