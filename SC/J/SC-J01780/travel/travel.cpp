#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int r[4],x[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<=c1.size();i++){
		if(c1[i]>='0'&&c1[i]<='9')r[1]=r[1]*10+(c1[i]-'0');
		if(s1[i]>='0'&&s1[i]<='9')r[2]=r[2]*10+(s1[i]-'0');
		if(s1[i]>='A'&&s1[i]<='Z')r[3]=(s1[i]-'A');
	}
	for(int i=0;i<=c2.size();i++){
		if(c2[i]>='0'&&c2[i]<='9')x[1]=x[1]*10+(c2[i]-'0');
		if(s1[i]>='0'&&s1[i]<='9')x[2]=x[2]*10+(s2[i]-'0');
		if(s1[i]>='A'&&s1[i]<='Z')x[3]=(s2[i]-'A');
	}
	if(x[1]!=r[1]){
		cout<<"0000";return 0;
	}else {
		cout<<"1";
	}
	if(r[2]!=x[2]){
		cout<<"000";return 0;
	}else{
		cout<<"1"; 
	}
	if((x[3]<3&&r[3]<3)||(x[3]>=3&&r[3]>=3)){
		cout<<"1";
	}else{
		cout<<"00";return 0;
	}
	if((x[3]<3&&r[3]<3)||(x[3]>=3&&r[3]>=3)){
		if((abs(x[3]-r[3])==1&&(x[3]<3&&r[3]<3))||(abs(x[3]-r[3])==2&&(x[3]>=3&&r[3]>=3))){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	} 
	return 0;
} 