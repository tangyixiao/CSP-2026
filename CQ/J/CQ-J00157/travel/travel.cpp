#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e5+1;
void fast(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	return;
}
string s1,s2,c1,c2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	fast();
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		cout<<"1";
		if(s1[0]+s1[1]!=s2[0]+s2[1]) cout<<"000";
		else{
			cout<<"1";
			if(s1[2]<='C'&&s2[2]>'C'||s2[2]<='C'&&s1[2]>'C') cout<<"00";
			else{
				cout<<"1";
				int a=s1[2],b=s2[2];
				if((abs(a-b)==1&&(s1[2]=='B'||s2[2]=='B'))||(s1[2]>'C'&&s2[2]>'C')) cout<<"1";
				else cout<<"0";
			}
		}
	}
	return 0;
}
