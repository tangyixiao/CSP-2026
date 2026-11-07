#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1,a2,a3,a4,a5;
	char s1,s2,s3,s4,s5;
	cin>>a1>>a2>>a3>>a4>>a5>>s1>>s2>>s3>>s4>>s5;
	if(a1==s1 and a2==s2)cout<<1;
	else cout<<0;
	if(a1==s1 and a2==s2 and a3==s3 and a4==s4)cout<<1;
	else cout<<0;
	if(a1==s1 and a2==s2 and a3==s3 and a4==s4 and ((a5<='C' and s5<='C') or (a5>'C' and s5>'C')))cout<<1;
	else cout<<0;
	if(a1==s1 and a2==s2 and a3==s3 and a4==s4 and ((a5<='C' and s5<='C') or (a5>'C' and s5>'C')) and abs(a5-s5)==1)cout<<1;
	else cout<<0;
}
