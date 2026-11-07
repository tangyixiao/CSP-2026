#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int M=200005;
int n;
int L[M];
char C[M];
ll ans=0;
ll len=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>L[i];
		cin>>C[i];
		len+=L[i];
	}
	int l=1,r=n;
	int lll=L[l],lr=L[r];
	while(l!=r){
		if(C[l]!=C[r]){
			ans+=min(lll,lr);
		}
		if(lll<lr){
			lr-=lll;lll-=lll;
			l++;
			lll=L[l];
		}
		else if(lll>lr){
			lll-=lr;lr-=lr;
			r--;
			lr=L[r];
		}
		else{
			l++;r--;
			lr=L[r];
			lll=L[l];
		}
	}
	cout<<ans;
	return 0;
}