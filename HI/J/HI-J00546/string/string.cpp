#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,lens=0,mid=0,ans=0;
	char c;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		lens+=a;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}
	mid=(lens+1)/2-1;
	for(int i=0;i<=mid;i++){
		if(s[i]!=s[lens-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
