#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char>s;
int cnt=0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char q;
		cin>>a>>q;
		for(int j=1;j<=a;j++)s.push_back(q); 
	} 
	int z=s.size();
	for(int i=0;i<(z/2);i++){
		if(s[i]!=s[z-1-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}
 