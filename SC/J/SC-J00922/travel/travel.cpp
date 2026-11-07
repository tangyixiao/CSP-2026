#include<bits/stdc++.h>
using namespace std;
string s1,s2,c1,c2;
string s;
int main(){
	s+="ABCDF";
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>c1>>c2;
	if(s1==c1){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	string x2,y2;
	for(int i=0;i<=1;i++){
		x2+=s2[i];
		y2+=c2[i];
	}
	if(x2==y2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	int k1=s.find(s2[2]);
	int k2=s.find(c2[2]);
	if(k1>=4&&k2>=4){
		cout<<"11";
	}else if(k1<1&&k2<1){
		cout<<"1";
		int cc=k1-k2;
		if(cc==1||cc==-1){
			cout<<1;
		}else{
			cout<<"0";
			return 0;
		}
	}else{
		cout<<"00";
		return 0;
	}
	
}