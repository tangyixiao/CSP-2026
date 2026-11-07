#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a,len=0,mid,ans=0;
char c;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	while(n--){
		cin>>a>>c;
		len+=a; 
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}mid=len>>1;
	len=len-1;
	for(int i=0;i<mid;i++){
		if(s[i]!=s[len]){
			ans++;
		}len--;
	}cout<<ans;
	return 0;
}

