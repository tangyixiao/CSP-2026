#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	for(long long i=1;i<=m;i++){
		cout<<n<<" "; 
	}
	return 0;
}
