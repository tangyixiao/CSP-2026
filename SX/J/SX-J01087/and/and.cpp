#include<bits/stdc++.h>
using namespace std;
int a[1000001][40];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,x,ans=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>x;
    	int s=0;
    	while(x){
      s++;
     a[i][s]=x%2;
      x/=2;
		}
	}
    for(int i=1;i<n;i++){

for(int j=i+1;j<=n;j++){int s=0;
     for(int k=1;k<=33;k++)
     s+=(a[i][k]+a[j][k])/2;
     ans=max(ans,s);
	}
	}
	cout<<ans;
	return 0;
}