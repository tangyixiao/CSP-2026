#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		string p1=b.substr(0,2),p2=d.substr(0,2);
		if(p1==p2){
			cout<<1;
			char s1=b[2],s2=d[2];
			if(s1>s2)swap(s1,s2);
			if((s1<='C'&&s2<='C')||(s1>='D'&&s2>='D')){
				cout<<1;
				if(s1=='A'&&s2=='C')cout<<0;
				else cout<<1;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
