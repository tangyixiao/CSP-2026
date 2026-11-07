#include<bits/stdc++.h>
using namespace std;
struct ticket{
	string c;
	string s;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ticket r;
	ticket x;
	cin>>r.c>>r.s>>x.c>>x.s;
	if(r.c==x.c){
		cout<<"1";
		if(r.s[0]==x.s[0]&&r.s[1]==x.s[1]){
			cout<<"1";
			if(r.s[2]<='C'&&x.s[2]<='C'){
				cout<<"1";
				if(abs(r.s[2]-x.s[2])==1){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else if(r.s[2]>='D'&&x.s[2]>='D'){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
