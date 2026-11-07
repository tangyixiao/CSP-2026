#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]){
			if(s1[1]==s2[1]){
				cout<<1;
				char h1,h2;
				h1=s1[2];
				h2=s2[2];
				if(h1=='F'&&h2=='D' || h1=='D'&&h2=='F'){
					cout<<11;
				}else if(h1>='A' && h1<='C' && h2>='A' && h2<='C'){
					cout<<1;
					if(abs(h1-h2)==1){
						cout<<1;
					}else{
						cout<<0;
					}
				}
				else{
					cout<<"00";
					return 0;
				}
			}else{
				cout<<"000";
				return 0;
			}
		}else{
			cout<<"000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
