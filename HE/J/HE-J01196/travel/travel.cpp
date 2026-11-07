#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	long long bj=0,bjj=0,cd=s.size()-1;
	long long z=s[s.size()-1]-'A'+1,zz=ss[ss.size()-1]-'A'+1;
	for(int i=0;i<c.size();i++){
		if(c[i]!=cc[i]){
			cout<<'0';
			bjj=1;
			break;
		}
	}
	if(bjj==0) cout<<'1';
	for(int i=0;i<2;i++){
		if(s[i]!=ss[i]){
			cout<<'0';
			bj=1;
			break;
		}
	}
	if(bj==0&&z!=zz) cout<<'1';
	else if(bj==0) cout<<'0';
	if(z<=3&&zz<=3&&z!=zz&&bj==0&&bjj==0){
		if(abs(zz-z)==1){
			cout<<"11";
		}else{
			cout<<"10";
		}
	} 
	else if(z>=4&&z<=5&&zz>=4&&zz<=5&&z!=zz&&bj==0&bjj==0){
		cout<<"11";
	} 
	else{
	 	cout<<"0";
		cout<<"0";	
	}
	return 0;
		

} 
