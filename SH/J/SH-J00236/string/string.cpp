#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main()
{
	freopen("string4.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char c;
		cin >> x >> c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	int i,j;
	n=s.size();
	if(n%2==0){
		j=(n+1)/2;
		i=j+1;
	}
	else{
		j=(n+1)/2;
		i=j;
	}
	int cnt=0;
	for(;i<n;j--,i++){
		if(s[i]!=s[j]){
		}
	}
	cout << cnt;
	return 0;
}

