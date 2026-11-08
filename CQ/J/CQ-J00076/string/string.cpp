#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,q,len,cnt;
char c;
string s="";
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>q>>c;
		 len+=q;
		for(int j=1;j<=q;j++){
			s+=c;
		}
	}
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	
	
	return 0;
}
