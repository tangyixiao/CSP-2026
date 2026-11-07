#include<bits/stdc++.h>
using namespace std;

const int N = 2*1e5+10;
int n,m,a[N];
	
int main(){
	freopen("card4.in","r",stdin);
	freopen("card4.out","w",stdout);
	cin>>n>>m;
	int ans=0,m=0;
	a[0]=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==a[i-1]){
			ans++;
		}
		else{
			//m++;
			cout<<ans<<" ";
			m+=ans;
			ans=m;
		}
	}
}
