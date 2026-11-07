#include<bits/stdc++.h>
using namespace std;
int n,m,la;
long long sum;
bool k[200010][34],b[200010][34];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		b[i][0]=true;
		long long x;
		int op=32;
		cin>>x;
		while(x!=0){
			if(x%2==1)k[i][op]=true;
			op--;
			x/=2;
		}
	}
	for(int j=1;j<=32;j++){
		int ans=0;
		for(int i=1;i<=n;i++){
			if(b[i][la]==true&&k[i][j]==true){
				ans++;
				b[i][j]=true;
			}
		}
		if(ans>=m){
			la=j;
			sum+=(1<<(32-j));
		}
	}
	cout<<sum;
	return 0;
} 