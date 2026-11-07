#include<bits/stdc++.h>
#define int long long
using namespace std;
int sum,cnt,n;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char b;
		cin>>b;
		for(int j=0;j<a;j++)s+=b;
		cnt+=a;
	}
	int len = cnt / 2;
	int l=0,r = s.size()-1;
	while(l<=r){
		if(s[l]!=s[r])sum+=1;
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}