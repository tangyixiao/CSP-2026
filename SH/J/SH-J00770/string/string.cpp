#include <bits/stdc++.h>
using namespace std;
//const int N=2e5+7;
int n;
//long long sum=0;
//struct str{
//	char c;
//	long long l;
//};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	str s[N];
//	s[0].l=0;
	cin >> n;
	string x=" ";
	for (int i=1;i<=n;i++){
		int l;
		char c;
		cin >> l >> c;
		for (int j=1;j<=l;j++){
			x=x+c;
		}
	}
	int l=1,r=x.size()-1;
	long long ans=0;
	while (l<=r){
		if (x[l]!=x[r]){
			ans++;
		}
		l++;
		r--;
	}
	cout << ans;
	return 0;
}
