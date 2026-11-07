#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s,s_i;
ll n,n_i,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//-------------------------------------
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>n_i>>s_i;
		for(ll j=1;j<=n_i;j++) s=s+s_i;
	}
	
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			s[r]==s[l];
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	//-------------------------------------
	fclose(stdin);
	fclose(stdout);
	return 0;
}  
