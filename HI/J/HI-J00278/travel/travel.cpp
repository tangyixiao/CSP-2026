#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int a[4]={0,0,0,0};
	char p1=s1[0],q1=s1[1],p2=s2[0],q2=s2[1];
	int m=(p1-'0')*10+q1-'0',n=(p2-'0')*10+q2-'0';
	if(c1!=c2){
		cout<<"0000";
	}else if(c1==c2){
		if(m!=n){
			cout<<"1000";
		}else{
			if(((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F'))||((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))){
				if(s1[2]>='D'&&s2[2]>='D'){
					cout<<"1111";
				}else if((s1[2]=='A'||s1[2]=='B')&&(s2[2]=='A'||s2[2]=='B')){
					cout<<"1111";
				}else if((s1[2]=='C'||s1[2]=='B')&&(s2[2]=='C'||s2[2]=='B')){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}
		
	}
	
	
	return 0;
}
