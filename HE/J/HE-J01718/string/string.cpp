#include<bits/stdc++.h>
using namespace std;
long long cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int n;
	cin>>n;
	while(n--){
		int a;
		char c;
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	int r=s.size()-1;
	int l=0;
	while(r>=l){
		if(s[l]!=s[r]){
			cnt++;
			l++;
			r--;
			continue;
		}
		l++;
		r--;
	}
	cout<<cnt;
	return 0;
}
