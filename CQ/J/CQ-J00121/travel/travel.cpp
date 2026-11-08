#include<bits/stdc++.h> 
using namespace std;
string s,ss,c,cc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>ss>>c>>cc;
	if(s==c){
		cout<<1;
		if(ss[0]==cc[0]&&ss[1]==cc[1]){
			cout<<1;
			if((ss[2]=='A'&&cc[2]=='B')||(ss[2]=='A'&&cc[2]=='C')||(ss[2]=='B'&&cc[2]=='C')||(ss[2]=='B'&&cc[2]=='A')||(ss[2]=='C'&&cc[2]=='B')||(ss[2]=='C'&&cc[2]=='A')||(ss[2]=='D'&&cc[2]=='F')||(ss[2]=='F'&&cc[2]=='D')){
				cout<<1;
				if((ss[2]=='A'&&cc[2]=='B')||(ss[2]=='B'&&cc[2]=='C')||(ss[2]=='B'&&cc[2]=='A')||(ss[2]=='C'&&cc[2]=='B')||(ss[2]=='D'&&cc[2]=='F')||(ss[2]=='F'&&cc[2]=='D')){
					cout<<1;
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else cout<<"0000";
	
	
	return 0;
}
