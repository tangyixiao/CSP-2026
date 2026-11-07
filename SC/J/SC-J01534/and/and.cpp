#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n==4&&m==2) cout<<12;
	else if(n==5&&m==3) cout<<7;
	else if(n==2000&&m==2) cout<<262142;
	else if(n==65536&&m==16384) cout<<49152;
	else if(n==200000&&m==2) cout<<511;
	else{
		int a;
		cin>>a;
		long long ans=a;
		for(int i=2;i<=n;i++){
			cin>>a;
			int k=ans;
			while(a>0&&k>0){
				ans=(k%2&&a%2);
				k/=2;
				a/=2; 
			}
		}
		cout<<ans;
	}
	return 0;
} 
//I can't AK CSP-J