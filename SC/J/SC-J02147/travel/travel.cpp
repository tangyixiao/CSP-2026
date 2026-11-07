#include<bits/stdc++.h>

using namespace std;
const int MAX=1e5+5;

int a,b,s1,s2;
char w1,w2;
void  solve(){
	cin>>a>>s1>>w1>>b>>s2>>w2;
//	cout<<a<<s1<<w1<<b<<s2<<w2;
	cout<<(a==b);
	cout<<((s1==s2)&&(a==b));
	cout<<((s1==s2)&&(a==b)&&((w1=='D'&&w2=='F')||(w1=='F'&&w2=='D')||('A'<=w1&&w1<='C'&&'A'<=w2&&w2<='C')));
//	cout<<w1<<' '<<w2<<' '<<abs(w1-w2)<<'\n';
	cout<<(((s1==s2)&&(a==b)&&((w1=='D'&&w2=='F')||(w1=='F'&&w2=='D')||(('A'<=w1&&w1<='C'&&'A'<=w2&&w2<='C')&&(abs(w1-w2)==1)))));
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T=1;
//  cin>>T;
	while(T--)solve();
	return 0;
}