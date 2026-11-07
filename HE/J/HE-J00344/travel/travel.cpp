#include<bits/stdc++.h>
using namespace  std;
string rx,rz,xx,xz;
string s="";
long long len,sum,cnt;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>rx>>rz>>xx>>xz;
	if(rx==xx) s=s+"1";
	else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<rz.size()-1;i++){
		if(rz[i]==xz[i]) len++;
	}
	if(len==rz.size()-1) s=s+"1";
	else{
		cout<<s<<"000";
		return 0;
	}
	sum=rz[2]-'A',cnt=xz[2]-'A';
	if((sum<=2&&cnt<=2)||(sum>=3 and cnt>=3)) s=s+"1";
	else s=s+"0";
	if(abs(sum-cnt)==1){
		if((rz[2]!='C'&&xz[2]!='D')&&(rz[2]!='D'&&xz[2]!='C')) s=s+"1";
		else s=s+"0";
	}else s=s+"0";
	cout<<s;
	return 0;
}
