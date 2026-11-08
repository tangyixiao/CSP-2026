#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t=0,h=0;
	int c1,c2;
	int s11,s22;
	char s1,s2;
	cin>>c1>>s11>>s1>>c2>>s22>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		t=1;
	}
	if(t==1){
		for(int i=1;i<=4;i++){
			cout<<"0";
		}
	}else{
		if(s11==s22){
			cout<<"1";
			h=1;
		}else{
			cout<<"0";
		}
		if(s1=='A' || s1=='B' || s1=='C'){
			if(s2=='A' || s2=='B' || 2=='C'){
				if(s11==s22){
					cout<<"1";
				}
			}else{
				cout<<"0";
			}
		}else if(s1=='D' || s1=='F'){
			if(s2=='D' || s2=='F'){
				if(s11==s22){
					cout<<"1";
				}
			}else{
				cout<<"0";
			}
		}
		int o=0;
		if(s1=='A' && s2=='B' && h==1){
			cout<<"1";
			o=1;
		}else if(s1=='B' && s2=='C' && h==1){
			cout<<"1";
			o=1;
		}else if(s1=='D' && s2=='F' && h==1){
			cout<<"1";
			o=1;
		}
		if(o==0){
			cout<<"0";
		}
	}
	return 0;
}
