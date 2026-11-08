#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
vector<char>s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	s.push_back(0);
	for(int i=1;i<=n;i++){
		char x;
		cin>>a[i]>>x;
		for(int j=1;j<=a[i];j++){
			s.push_back(x);
		}
	}
	long long q=s.size()-1;
	for(int i=1;i<=q/2;i++){
//		cout<<s[i]<<s[q-i+1];
		if(s[i]!=s[q-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
