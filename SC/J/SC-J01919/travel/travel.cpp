#include<bits/stdc++.h>
using namespace std;

int a,b;
bool f,g,f1;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i = 0;i < 2;i++) a = a*10+(s1[i]-'0'),b = b*10+(s2[i]-'0');
	if(c1 == c2) f1 = 1,cout<<1;
	else cout<<0;
	if(f1 and a == b) g = 1,cout<<1;
	else cout<<0;
	if(g and ((s1[2]-'A' <= 2 and s2[2]-'A' <= 2) or
	 (s1[2]-'A' > 2 and s2[2]-'A' > 2))) f = 1,cout<<1;
	else cout<<0;
	if(f and abs(s1[2]-s2[2]) == 1) cout<<1;
	else cout<<0;
	
	return 0;
}
