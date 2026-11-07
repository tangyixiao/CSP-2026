#include<bits/stdc++.h>
using namespace std;
const int N=5*1e5+5;
int n,m,a[N],sum[N],p[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=n;i>=1;i--){
		cin>>a[i];
		sum[a[i]]++;
		
	}
	for(int i=1;i<=m;i++){
		if(i==a[1]){
			cout<<n<<" ";
		}
		else{
			cout<<sum[i]<<" ";
		}
	}
	return 0;
}