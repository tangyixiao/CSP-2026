#include<bits/stdc++.h>
using namespace std;
char cnt1[100],cnt2[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	cnt1[1]=b[0],cnt1[2]=b[1],cnt1[3]=b[2];
	cnt2[1]=d[0],cnt2[2]=d[1],cnt2[3]=d[2];
	if(cnt1[1]==cnt2[1]&&cnt1[2]==cnt2[2]){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if((cnt1[3]<='C'&&cnt2[3]<='C')||(cnt1[3]>='D'&&cnt2[3]>='D')){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	if((abs(int(cnt1[3])-int(cnt2[3]))==1)||(cnt1[3]>='D'&&cnt2[3]>='D')){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}