#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	string ca,sa,cb,sb;
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb){
		cout<<"1";
		if(sa[0]==sb[0]&&sa[1]==sb[1]){
			cout<<"1";
			int x=sa[2]-'A'+1;
			int y=sb[2]-'A'+1;
			if((x<=3&&y<=3)||(x>3&&y>3)){
				cout<<"1";
				if(x>y)swap(x,y);
				if(x+1==y){
					cout<<"1";
				}else{
					cout<<"0";
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
/*
关注洛谷 hb314 ，欣赏时代巨作《周桐玥武的算法圣殿》 
*/