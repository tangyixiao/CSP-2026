#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
long long len[N];
char a[N];
long long ans=0;
int l,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>len[i]>>a[i];
	}
	l=1;
	r=n;
	while(r>l){
		if(a[l]!=a[r]){
			ans+=min(len[l],len[r]);
		}
		if(len[l]>len[r]){
			len[l]-=len[r];
			r--;
		}else if(len[l]<len[r]){
			len[r]-=len[l];
			l++;
		}else{
			l++;
			r--;
		}
		
	}
	cout<<ans;
	return 0;
} 
