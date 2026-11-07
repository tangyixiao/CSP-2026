#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	mp['A']=1;
	mp['B']=1;
	mp['C']=1;
	mp['D']=2;
	mp['F']=2;
	if(a==c){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	if(a==c&&b.substr(0,2)==d.substr(0,2)){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(a==c&&b.substr(0,2)==d.substr(0,2)&&mp[b[2]]==mp[d[2]]){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	int bb=b[2],dd=d[2];
	if(abs(bb-dd)==1){
		cout<<"1";
	}else{
		cout<<"0";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
