#include<bits/stdc++.h>
using namespace std;
long long n,x;
char q;
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>q;
		for(int j=1;j<=x;j++){
			s+=q;
		}
	}
	for(int i=0;i<(s.size()+1)/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
