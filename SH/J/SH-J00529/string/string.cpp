#include<bits/stdc++.h>
using namespace std;
string s;
int n,x;
long long ans=0;
char y;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y;
		for(int i=1;i<=x;i++){
			s+=y;
		}
	}
	for(int i=0,j=s.size()-1;i<=j;i++,j--){
		if(s[i] != s[j]) ans++;
	}
	cout<<ans;
	return 0;
}
