#include<bits/stdc++.h>
using namespace std;
string a,s,d,f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>d>>f;
	if(a==d){
		cout<<1;
		if(s[0]+s[1]==f[0]+f[1]){
			cout<<1;
			if(s[2]<='C'){
				if(f[2]<='C'){
					cout<<1;
					if(s[2]-1==f[2]||s[2]+1==f[2])cout<<1;
					else cout<<0;
				}else cout<<"00";
			}else{
				if(s[2]-1==f[2]||s[2]+1==f[2])cout<<11;
				else cout<<"00";
			}
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}