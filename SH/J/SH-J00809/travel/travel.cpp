#include<bits/stdc++.h>
using namespace std;
string s,ss,sss,ssss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>ss>>sss>>ssss;
	if(s==sss){
		cout<<1;
		if(int(ss[0])==int(ssss[0])&&int(ss[1])==int(ssss[1])){
			cout<<1;
			if(ss[2]>='A'&&ss[2]<='C'&&ssss[2]>='A'&&ssss[2]<='C'){
				cout<<1;
				if(ss[2]+1==ssss[2]||ss[2]-1==ssss[2]){
					cout<<1;
				}
				else cout<<0;
			}
			else if(ss[2]>='D'&&ss[2]<='F'&&ssss[2]>='D'&&ssss[2]<='F'){
				cout<<11;
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
