#include<bits/stdc++.h>
using namespace std;
string t1,t2,n1,n2;
bool ok=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>t1>>n1>>t2>>n2;
	if(t1[0]==t2[0]&&t1[1]==t2[1]) cout<<1;
	else{
		cout<<0;
		ok=0;
	}
	if(n1[0]==n2[0]&&n1[1]==n2[1]&&ok) cout<<1;
	else{
		cout<<0;
		ok=0;
	}
	if(ok&&((n1[2]+n2[2]=='A'+'C')||(n1[2]+n2[2]=='A'+'B')||(n1[2]+n2[2]=='B'+'C')||(n1[2]+n2[2]=='D'+'E'))) cout<<1;
	else{
		cout<<0;
		ok=0;
	}
	if(!ok||(n1[2]+n2[2]=='A'+'C')) cout<<0;
	else cout<<1;
	return 0;
} 
