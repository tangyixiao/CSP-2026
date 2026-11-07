#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int convert(string x){
	if(x=="A") return 1;
	else if(x=="B") return 2;
	else if(x=="C") return 3;
	else if(x=="D") return 4;
	else if(x=="F") return 5;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1) {
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}
	string la=a2.substr(0,2);
	string lb=b2.substr(0,2);
	//cout<<endl<<la<<lb;
	if(la!=lb){
		cout<<"000";
		return 0;
	}else{
		cout<<1;
	}
	string sa=a2.substr(2,1);
	string sb=b2.substr(2,1);
	//cout<<endl<<sa<<sb;
	int numsa=convert(sa);
	int numsb=convert(sb);
	//cout<<numsa<<numsb;
	if((numsa<=3 && numsb>=4) || (numsa>=4 && numsb<=3)){
		cout<<"00";
		return 0; 
	}else{
		cout<<1;
	}
	if(numsa-numsb==1 || numsb-numsa==1) cout<<1;
	else cout<<0;
	return 0;
}
