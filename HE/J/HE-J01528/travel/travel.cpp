#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		string t1 = "",t2 = "";
		t1 += s1[0];t1 += s1[1];
		t2 += s2[0];t2 += s2[1];
		if(t1 == t2){
			cout<<"1";
			char a = s1[2];char b = s2[2];
			if((a>='A' && a<='C' && b>='A' && b<='C') || (a>='D' && a<='F' && b>='D' && b<='F')){
				cout<<"1";
				if(abs(a-b)==1) cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
