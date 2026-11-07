#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
int groups,n;
vector<char>v;
int ans;
/* TODO : Optimize */

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	72pts
	cin>>groups;
	v.push_back('a');
	for(int i=1;i<=groups;++i)	{
		int x;
		char ch;
		cin>>x>>ch;
		while(x--) {
			v.push_back(ch);
		}
	}
	int n=v.size()-1;
	int l=1,r=n;
	while(l<r){
		if(v[l]!=v[r]){
			ans++;
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/