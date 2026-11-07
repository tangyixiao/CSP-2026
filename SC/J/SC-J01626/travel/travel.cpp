#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	string ss1="",ss2="",sss1="",sss2="";
	for(long long i=0;i<3;i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			ss1+=s1[i];
		}
		else{
			sss1+=s1[i];
		}
		if(s2[i]>='0'&&s2[i]<='9'){
			ss2+=s2[i];
		}
		else{
			sss2+=s2[i];
		}
	}
	if(c1==c2){
		if(ss1==ss2){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	if(c1==c2&&ss1==ss2){
		if((sss1=="A"&&sss2=="B")||(sss1=="A"&&sss2=="C")||(sss1=="B"&&sss2=="C")||(sss1=="B"&&sss2=="A")||(sss1=="B"&&sss2=="C")||(sss1=="C"&&sss2=="A")||(sss1=="D"&&sss2=="F")||(sss1=="F"&&sss2=="D")){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	if(c1==c2&&ss1==ss2){
		if((sss1=="A"&&sss2=="B")||(sss1=="B"&&sss2=="A")||(sss1=="C"&&sss2=="B")||(sss1=="B"&&sss2=="C")||(sss1=="D"&&sss2=="F")||(sss1=="F"&&sss2=="D")){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<0;
	}
	return 0;
}