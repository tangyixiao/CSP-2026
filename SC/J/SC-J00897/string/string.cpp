#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 2e5+10;

int n;
int a[N];
char ch;
//char ch[N];
string s;
ll sum,ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i] >> ch;
		sum += a[i];
		for(int j = 1;j <= a[i];j++) s += ch;
	}
	
	for(int i = 0;i < sum/2;i++)
		if(s[i] != s[sum-1-i]) ans++;
	cout << ans;
	return 0;
}