#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
char c[N];
int l;
int n;
string s;
int main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i] >> c[i];
		l += a[i];
	}
	for(int i = 0;i < n;i++){
		for(int j = 0;j < a[i];j++){
			s += c[i];
		}
	}
	int ans = 0;
	int i = 0 , j = l - 1;
	while(i < j){
		ans += (s[i] != s[j]);
		i++;j--;
	}
	
	cout << ans;
}
