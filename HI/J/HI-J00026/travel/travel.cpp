#include <bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	string x=s2,y=s4;
	//1
	if(s1==s3) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	//2
	for(int i=0;i<2;i++){
		if(s2[i]>='0'&&s2[i]<='9') x=s2[i-1]*10+s2[i];
		if(s4[i]>='0'&&s4[i]<='9') y=s4[i-1]*10+s4[i];
	}
	if(x==y) cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	//3
	for(int i=0;i<3;i++){
		if(s2[i]>='A'&&s2[i]<='Z') x=s2[i];
		if(s4[i]>='A'&&s4[i]<='Z') y=s4[i];
	}
	if(x=="A" && y=="A"||y=="B"||y=="C") cout<<"1";
	else if(x=="B" && y=="A"||y=="B"||y=="C") cout<<"1";
	else if(x=="C" && y=="A"||y=="B"||y=="C") cout<<"1";
	
	else if(y=="A" && x=="A"||x=="B"||x=="C") cout<<"1";
	else if(y=="B" && x=="A"||x=="B"||x=="C") cout<<"1";
	else if(y=="C" && x=="A"||x=="B"||x=="C") cout<<"1";
	
	else if(x=="D"&&y=="D"||y=="F") cout<<"1";
	else if(x=="F"&&y=="D"||y=="F") cout<<"1";
	
	else if(y=="D"&&x=="D"||x=="F") cout<<"1";
	else if(y=="F"&&x=="D"||x=="F") cout<<"1";
	
	else{
		cout<<"00";
		return 0;
	}
	//4
	if(x=="A"&&y=="B") cout<<"1";
	else if(x=="B"&&y=="C"&&y=="A") cout<<"1";
	else if(x=="C"&&y=="B") cout<<"1";
	
	else if(y=="A"&&x=="B") cout<<"1";
	else if(y=="B"&&x=="C"&&x=="A") cout<<"1";
	else if(y=="C"&&x=="B") cout<<"1";
	
	else if(x=="D"&&y=="F") cout<<"1";
	else if(x=="F"&&y=="D")  cout<<"1";
	
	else if(y=="D"&&x=="F") cout<<"1";
	else if(y=="F"&&x=="D")  cout<<"1";
	
	else cout<<"0";
	return 0;
}
