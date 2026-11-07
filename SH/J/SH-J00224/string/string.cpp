#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
char c[200010];
void input(){
	for(int i = 1;i <= n;i++)
		cin>>a[i]>>c[i];
}
void solve_BF(){
	string s = "";
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= a[i];j++)
			s = s + c[i];
	string tmp = s;reverse(s.begin(),s.end());
	if(tmp == s){cout<<0;return;}
	long long ans = 0;
	for(int i = 0,j = s.size() - 1;i <= j;i++,j--){
		if(s[i] != s[j])ans++;
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n == 1){
		cin>>a[0]>>c[0];
		cout<<0;
	}
	else if(n == 2){
		cin>>a[0]>>c[0]>>a[1]>>c[1];
		if(c[0] == c[1])cout<<0;
		else cout<<min(a[0],a[1]);
	}
	else{
		input();
		if(n <= 10||*max_element(a + 1,a + 1 + n) * n <= 10000000)
			solve_BF();
	}
	return 0;
}
