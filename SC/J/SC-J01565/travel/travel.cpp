#include<bits/stdc++.h>
using namespace std;
string s,c,ss,cc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>c>>ss>>cc;
	if(s!=ss){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
		if(c[0]!=cc[0]||c[1]!=cc[1]){
			cout<<"000";
		}else{
			cout<<1;
			int flag=0;
			if(c[2]=='D'||c[2]=='F'){
				if(cc[2]=='D'||cc[2]=='F'){
					flag=1;
				}
			}else{
				if(cc[2]=='A'||cc[2]=='B'||cc[2]=='C'){
					flag=1;
				}
			}
			if(flag==0){
				cout<<"00";
			}else{
				cout<<1;
				if(cc[2]==c[2]-1||cc[2]==c[2]+1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}
	}
	return 0;
}