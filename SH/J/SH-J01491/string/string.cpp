#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		string c;
		cin>>a>>c;
		for(long long i=1;i<=a;i++){
			s+=c;
			cnt+=a;
		}
	}for(int i=1;i<cnt;i++){
		if(s[i]!=s[i-1]){
			cout<<cnt/2;
			return 0;
		}
	}
	cout<<0;
}
