#include<bits/stdc++.h>
using namespace std;
int a;
char c;
stack<char> k;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0;
	cin >> n;
	for(int i = 1; i <= n;i++)
	{
		cin >> a>>c;
		l+=a;
		for(int j = 1; j <= a;j++)s+=c;
	}
	int m = l/2,ans = 0;
	if(l%2==0){
		for(int i = 0; i< m;i++)k.push(s[i]);
		for(int i = m; i< l;i++){
			if(s[i]!=k.top())ans++;
			k.pop();
		}
	}
	else{
		for(int i = 0; i <= m;i++)k.push(s[i]);
		k.pop();
		for(int i = m+1; i< l;i++){
			if(s[i]!=k.top())ans++;
			k.pop();
		}
	}
	cout << ans;
	return 0;
}
