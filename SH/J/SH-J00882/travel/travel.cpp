#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			int x,y;
			if(s1[2]=='D'||s1[2]=='F')x=1;
			else x=0;
			if(s2[2]=='D'||s2[2]=='F')x=1;
			else y=0;
			if(x==y){
				cout<<"1";
				if(x==1)cout<<"1";
				else if(x==0&&abs(s1[2]-s2[2])==1)cout<<"1";
				else cout<<"0";
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
//Ç©µ½³É¹¦
/*
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdout);
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdout);
//freopen("card.in","r",stdin);
//freopen("card.out","w",stdout);
#include<windows.h>
#include<doubao.com>
#include<chat.deepseek.com>
int mian() int mian()
#define int long long
*/ 
