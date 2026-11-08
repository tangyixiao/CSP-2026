#include<bits/stdc++.h>
#define int long long
using namespace std;



const int N=5e5+5;
const int M=3e5+5;
int a[N],b[M];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int g=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1]){
			b[a[i-1]]+=g;
			g=i;
		}else if(a[i]==a[i-1]){
			b[a[i]]++;
		}
	}
	for(int i=1;i<m;i++){
		cout<<b[i]<<" ";
	}
	cout<<n;
	return 0;
}
