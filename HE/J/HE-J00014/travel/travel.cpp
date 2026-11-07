#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb;
bool fa,fb,fc,fd;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>ca>>sa>>cb>>sb;
	if(ca!=cb){
		cout<<fa<<fb<<fc<<fd;
		return 0;
	}else{
		fa=true;
		if(sa.substr(0,2)!=sb.substr(0,2)){
			cout<<fa<<fb<<fc<<fd;
			return 0;
		}
		else{
			fb=true;
			if((sa[2]>'C'&&sb[2]<='C')||(sa[2]<='C'&&sb[2]>'C')){
				cout<<fa<<fb<<fc<<fd;
				return 0;
			}else{
				fc=true;
				if(abs(sa[2]-sb[2])!=1){
					cout<<fa<<fb<<fc<<fd;
					return 0;
				}else{
					fd=true;
					cout<<fa<<fb<<fc<<fd;
					return 0;
				}
			}
		}
	}
	return 0;
}
