#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
const int maxm=3e5+5;
long long n,m;
long long a[maxn],ans[maxm],b[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	for(int i=1;i<=m;i++){
		cout<<i<<" ";
	}
	return 0;
}
