#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n; 
ll ans,a;
char c;
string s="";
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++ ) s+=c;
	}
	ll len=s.size();

//	for(int i=0;i<len;i++) cout<<s[i];
//	cout<<len;
	int j=len-1;
	for(int i=0;i<len/2&& j>=len/2;i++){
		 j--;
		 //cout<<j;
		 if(s[j]!=s[i]) ans++;		
	}
	cout<<ans;
	return 0;
}

