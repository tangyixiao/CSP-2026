#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
string cnt[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","l",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cnt[1]='1';
	}else{
		cnt[1]='0';
		cnt[2]='0';
		cnt[3]='0';
		cnt[4]='0';
		for(int i=1;i<=4;i++){
			cout<<cnt[i];
		}
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cnt[2]='1';
	}else{
		cnt[2]='0';
		cnt[3]='0';
		cnt[4]='0';
		for(int i=1;i<=4;i++){
			cout<<cnt[i];
		}
		return 0;
	}
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
		if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			cnt[3]='1';
			if(s1[2]=='A'){
				if(s2[2]=='B'){
					cnt[4]='1';
				}
				else{
					cnt[4]='0';
				}
			}
			if(s1[2]=='B'){
				if(s2[2]=='C'){
					cnt[4]='1';
				}
				else{
					cnt[4]='0';
				}
			}
			if(s1[2]=='C'){
				if(s2[2]=='B'){
					cnt[4]='1';
				}
				else{
					cnt[4]='0';
				}
			}
		}
		else{
			cnt[3]='0';
			cnt[4]='0';
			for(int i=1;i<=4;i++){
				cout<<cnt[i];
			}
			return 0;
		}
	}else{
		if(s2[2]=='F'||s2[2]=='D'){
			cnt[3]='1';
			cnt[4]='1';
		}
		else{
			cnt[3]='0';
			cnt[4]='0';
		}
	}
	for(int i=1;i<=4;i++){
		cout<<cnt[i];
	}
	return 0;
}
