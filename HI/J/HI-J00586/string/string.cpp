#include<bits/stdc++.h>
using namespace std;
int a1[10005];
char c1[10005];
char x[10005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s;
	cin >> n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin >> a >> c;
		a1[i]=a;
		c1[i]=c;
		for(int j=1;j<=a1[i];j++){
			s = s+c1[i];
		}
	}
	for(int i=s.size();i>=0;i--){
		x[i]=s[i];
	}
	int m=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=x[i]){
			m++;
		}
	}
	cout << m;
	return 0;
}
