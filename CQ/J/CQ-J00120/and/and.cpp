#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e6+5;
int s[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>s[i];
	if(m==1){
		sort(s+1,s+1+n);
		cout<<s[n];
	}
	if(m==n){
		int ans=s[1];
		for(int i=2;i<=n;i++){
			ans&=s[i];
		}
		cout<<ans;
	}
}
