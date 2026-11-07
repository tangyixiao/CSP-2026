#include<bits/stdc++.h>
using namespace std;
string c_1,s_1,c_2,s_2;
bool q=1,w=1,e=1,r=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>c_1>>s_1>>c_2>>s_2;
	for(int i=0;i<2;i++){
		if(c_1[i]!=c_2[i]) q=0;
	}
	if(q==0){
		cout<<"0000"<<'\n';
		return 0;
	}
	cout<<q;
	for(int i=0;i<2;i++){
		if(s_1[i]!=s_2[i]){
			w=0;
		}
	}
	if(w==0){
		e=0,r=0;
		cout<<"000";
		return 0;
	}
	cout<<w;
	if(w){
		if(((s_1[2]=='A'||s_1[2]=='B'||s_1[2]=='C')&&(s_2[2]=='A'||s_2[2]=='B'||s_2[2]=='C'))||((s_1[2]=='D'||s_1[2]=='F')&&(s_2[2]=='D'||s_2[2]=='F'))){
			e=1;
		}else e=0;
	}
	if(e==0){
		cout<<"00";
		return 0;
	}
	cout<<e;
	if(e){
		if((s_1[2]=='A'&&s_2[2]=='B')||(s_1[2]=='B'&&s_2[2]=='A')||(s_1[2]=='B'&&s_2[2]=='C')||(s_1[2]=='C'&&s_2[2]=='B')||(s_1[2]=='D'&&s_2[2]=='F')||(s_1[2]=='F'&&s_2[2]=='D')){
			r=1;
		}else r=0;
	}
	cout<<r;
	return 0;
}
