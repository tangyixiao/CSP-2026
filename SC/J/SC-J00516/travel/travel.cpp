#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	
	string ac,as,bc,bs;//c:车厢;s:座位
	cin>>ac>>as>>bc>>bs;
	if(ac!=bc){
		cout<<"0000";
	}else{
		cout<<1;
		if(as[0]==bs[0] && as[1]==bs[1]){
			cout<<1;
			bool aw=0,bw=0;//0:ABC;1:DF
			if(as[2]=='D'||as[2]=='F') aw=1;
			if(bs[2]=='D'||bs[2]=='F') bw=1;
			if(aw==bw){
				cout<<1;
				if(aw==1){
					cout<<1;
				}else if(as[2]-bs[2]==1 || as[2]-bs[2]==-1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}
	
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}