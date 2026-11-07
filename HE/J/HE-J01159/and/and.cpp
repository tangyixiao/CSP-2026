#include <bits/stdc++.h>
using namespace std;
int a,n,s[100086];
int main(){
	freopen("and2.in","r",stdin);
	freopen("and2.out","w",stdout);
	cin >> n >> a;
	for(int i = 1;i <= n;i ++){
		cin >> s[i];
	}
	sort(s + 1,s + n + 1);
	reverse(s + 1,s + n + 1);
	cout << s[a];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
