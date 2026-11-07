#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	if(n==m){
		for(int i=1;i<=n;i++){
			cout<<n<<" ";
		}
	}
	return 0;
}

