#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long int len[N];
char  c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	long long int l=1,r=n,ans=0,target=0;
	for(int i=1;i<=n;i++){
		cin>>len[i];
		cin>>c[i];
	}
	while(l<r){
		if(c[l]!=c[r]){
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
