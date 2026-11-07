#include<bits/stdc++.h>
using namespace std;
string c1[20],s1[100],c2[20],s2[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=0;i<1;i++){
		cin>>c1[i]>>s1[i]>>c2[i]>>s2[i];
	}
	if(c1[1]==c2[1] and c1[2]==c1[2]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[1]==s2[1] and s1[2]==s2[2]){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[3]=="A" and s2[3]=="C" or s1[3]=="A" and s2[3]=="D" or  s1[3]=="A" and s2[3]=="F" or s1[3]=="B" and s2[3]=="D" or s1[3]=="B" and s2[3]=="F" or s1[3]=="C" and s2[3]=="F" or s1[3]=="C" and s2[3]=="D" or  s1[3]=="D" and s2[3]=="C" or s1[3]=="F" and s2[3]=="C" or s1[3]=="F" and s2[3]=="B" or s1[3]=="D" and s2[3]=="B" or s1[3]=="F" and s2[3]=="A" or  s1[3]=="D" and s2[3]=="A" or s1[3]=="C" and s2[3]=="A"){
		cout<<"0";
	}else{
		cout<<"1";
	}
	if(s1[3]=="A" and s2[3]=="C" or s1[3]=="A" and s2[3]=="D" or  s1[3]=="A" and s2[3]=="F" or s1[3]=="B" and s2[3]=="D" or s1[3]=="B" and s2[3]=="F" or s1[3]=="C" and s2[3]=="F" or s1[3]=="C" and s2[3]=="D" or  s1[3]=="D" and s2[3]=="C" or s1[3]=="F" and s2[3]=="C" or s1[3]=="F" and s2[3]=="B" or s1[3]=="D" and s2[3]=="B" or s1[3]=="F" and s2[3]=="A" or  s1[3]=="D" and s2[3]=="A" or s1[3]=="C" and s2[3]=="A"){
		cout<<"0";
	}else{
		cout<<"1";
	}
	return 0;
}
