#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool flag = true;
	char b1 = s1[s1.size()-1];
	char b2 = s2[s2.size()-1];
	bool f = false;
	int cnt = -1;
	if((b1>='A' && b1<='C') && (b2>='A'&& b2<='C')){
		f=true;
		cnt = 0;
	}else if((b1>='D' && b1<='F') && (b2>='D' && b2<='F')){
		f=true;
	}
	int x = b1-'A';
	int y = b2-'A';
	if(c1==c2){
		cout<<"1";
		for(int i = 0; i < s1.size()-1;i++){
			if(s1[i]!=s2[i]){
				flag = false;
			}	
		}
		if(flag){
			cout<<"1";
			if(f){
				cout<<"1";
				if((b1=='D' && b2=='F')||(b1=='F'&&b2=='D')||(cnt==0 && abs(x-y)==1)){
					cout<<"1";
					}else{
						cout<<"0";
					}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
			} 
	}else{
		cout<<"0000";
	}
	return 0;
}