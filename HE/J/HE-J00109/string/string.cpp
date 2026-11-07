#include<bits/stdc++.h>
using namespace std;
long long n,len,x,ans;
string s1,s2;
char c;
bool hui(){
	if(s1==s2) return 1;
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			s1+=c;
		}
	}
	len=s1.size();
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(hui()){
		cout<<0;
		return 0;
	}
	for(int i=0;i<len/2;i++){
		if(s1[i]!=s1[len-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
