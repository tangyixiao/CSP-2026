#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);//ovo
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) return (cout<<"0000",0);
	if((s1[0]!=s2[0])||(s1[1]!=s2[1])) return (cout<<"1000",0);
	int t1=s1[s1.size()-1],t2=s2[s2.size()-1];
	if(t1>t2) swap(t1,t2);
	if(t1<='C'&&t2>'C') return (cout<<"1100",0);
	if(t2-t1!=1) return (cout<<"1110",0);
	cout<<"1111";//heyiwei?
	return 0;
} 