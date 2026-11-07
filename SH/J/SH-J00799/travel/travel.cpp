#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string seat1,seat2;
int id1,id2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	seat1 += s1[0];
	seat1 += s1[1];
	seat2 += s2[0];
	seat2 += s2[1];
	id1 = (s1[2]<='C');
	id2 = (s2[2]<='C');
	if(c1==c2) cout<<1;
	else cout<<0;
	if(c1==c2 && seat1 == seat2) cout<<1;
	else cout<<0;
	if(c1==c2 && seat1 == seat2 && !(id1^id2)) cout<<1;
	else cout<<0;
	if(c1==c2 && seat1 == seat2 && !(id1^id2) && abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0;
	return 0;
} 
