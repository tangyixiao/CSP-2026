#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		if(s1[0]+s1[1]==s2[0]+s2[1]){
			cout<<"1";
			int cnt=0,cnt1=0;
			if(s1[2]!='F'&&s1[2]!='D'){
				cnt=1;
			}
			if(s2[2]!='F'&&s2[2]!='D'){
				cnt1=1;
			}
			if(cnt=cnt1){
				cout<<"1";
				char c=s1[2],c1=s2[2];
				if(abs(c1-c)==1){
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
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
