#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1 != c2) cout<<"0000";
	else{
		cout<<1;
		string a1 = s1.substr(0,2),
			a2 = s2.substr(0,2);
		if (a1 != a2) 
			cout<<"000";
		else{
			cout<<1;
			int c1 = s1[2] - 'A',c2  = s2[2] - 'A'; 
			if (!((( c1 > 2 )&&( c2 > 2 ))||
				(( c1 <= 2 )&&( c2 <= 2 ))))
				cout<<"00";
			else{
				cout<<1;
				if (!((c1 - c2 == 1) || (c2 - c1 == 1))) cout<<0;
				else cout<<1;
			}
		}
	}
	return 0;
}



