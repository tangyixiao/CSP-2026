#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0] and s1[1]==s2[1]){
			cout<<1;
			if(('A'<=s1[2] and s1[2]<='C' and 'A'<=s2[2] and s2[2]<='C') or ('D'<=s1[2] and s1[2]<='F' and 'D'<=s2[2] and s2[2]<='F')){
				cout<<1;
				if(abs(int(s1[2])-int(s2[2]))==1) cout<<1;
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}