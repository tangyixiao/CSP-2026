#include <bits/stdc++.h>
using namespace std;
char c1[5],s1[5],c2[5],s2[5]; 
int rk[200],nxt[200][200];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	rk['A']=1;
	rk['B']=1;
	rk['C']=1;
	rk['D']=2;
	rk['F']=2;
	nxt['A']['B']=1;
	nxt['B']['A']=1;
	nxt['C']['B']=1;
	nxt['B']['C']=1;
	nxt['D']['F']=1;
	nxt['F']['D']=1;
	if(c1[0]!=c2[0]||c1[1]!=c2[1]){
		cout<<0<<0<<0<<0;
		return 0;
	} 
	cout<<1;
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<0<<0<<0;
		return 0;
	}
	cout<<1;
	if(rk[s1[2]]!=rk[s2[2]]){
		cout<<0<<0;
		return 0;
	}
	cout<<1;
	if(nxt[s1[2]][s2[2]]==1) cout<<1;
	else cout<<0;
	return 0;
}
