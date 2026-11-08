#include<bits/stdc++.h>
using namespace std;
namespace melk{
	void solve(){
		string c1,s1,c2,s2;
		cin>>c1>>s1>>c2>>s2;
		bool ok1=false,ok2=false,ok3=false;
		if(c1==c2){
			cout<<"1";
			ok1=true;
		}
		else{
			cout<<"0";
		}
		if(ok1&&s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			ok2=true;
		}
		else{
			cout<<"0";
		}
		char left[3]={'A','B','C'},right[2]={'D','E'};
		bool flag1=false,flag2=false;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(i==j)continue;
				char s1_=left[i],s2_=left[j];
				if((s1[2]==s1_)&&(s2[2]==s2_)){
					flag1=true;
					break;
				}
			}
			if(flag1)break;
		}
		if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')){
			flag2=true;
		}
		if(ok2&&(flag1||flag2)){
			cout<<"1";
			ok3=true;
		}
		else{
			cout<<"0";
		}
		if(ok3&&((char(s1[2]+1)==s2[2])||(s1[2]==char(s2[2]+1)))){
			cout<<"1";
		}
		else cout<<"0";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	melk::solve();
	return 0;
}
