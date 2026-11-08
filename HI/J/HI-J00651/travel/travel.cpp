#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1, c2, s1, s2;
	cin>>c1>>s1>>c2>>s2;
	int a, b;
	a=s1[2]; b=s2[2];
	if(c1==c2){
		cout<<'1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<'1';
			if(a>=65&&a<=67&&b>=65&&b<=67){
				cout<<'1';
				if(a==65&&b==66||a==67&&b==66) cout<<'1';
				else if(a==66&&b==65||a==66&&b==67) cout<<'1';
				else cout<<0;
			}
			else if(a>=68&&a<=70&&b>=68&&b<=70){
				cout<<'11';
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	
	return 0;
}
