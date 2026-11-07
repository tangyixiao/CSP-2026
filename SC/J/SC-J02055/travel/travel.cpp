#include<bits/stdc++.h>
using namespace std;
int yytzw1,yytzw2;
string tyy1,tyy2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>yytzw1>>tyy1>>yytzw2>>tyy2;
	if(yytzw1!=yytzw2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(tyy1[0]!=tyy2[0]||tyy1[1]!=tyy2[1]){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	int a=0;
	int b=0;
	if(tyy1[2]=='F'||tyy1[2]=='D')a=1;
	if(tyy2[2]=='F'||tyy2[2]=='D')b=1;
	if(a!=b){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(a==1||tyy1[2]=='B'||tyy2[2]=='B'){
		cout<<"1";
		return 0;
	}
	cout<<"0";
	return 0;
}