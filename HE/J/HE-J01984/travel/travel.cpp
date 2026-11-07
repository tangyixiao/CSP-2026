#include <bits/stdc++.h>
using namespace std;
int c[5], s[5], n=1;
int main(){
	freopen("traver.in", "r", stdin);
	freopen("traver.out", "w", stdout);
	for(int i=1; i<=2; i++) scanf("%d%d%d%d", &c[1], &s[1], c[2], s[2]);
	while(n>0){
		n--;
		if(c[1]==c[2])
{
	cout<<1;
	if(s[1]!=s[2]){
		cout<<1;
		if(s[1]=='C'&&s[2]=='D') {
			cout<<1;
		}
		else cout<<0;
	}
	else cout<<0;
}
else cout<<0;
}
	return 0;
}
