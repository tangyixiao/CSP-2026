#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,st,st2,ce1,ce2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0000;
	}
	//Í¬Ïá 
	for(int i=0;i<s2.size();i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			st+=s1[i];
		}
		if(s2[i]>='0'&&s2[i]<='9'){
			st2+=s2[i];
		}
	}
	if(st==st2){
		cout<<100;
		//Í¬²à 
	}else{
		cout<<0<<0<<0;
	}
	//Í¬ÅÅ 
	return 0;
} 
