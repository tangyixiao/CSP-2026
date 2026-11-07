#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;	
int a1,b1,a2,b2,d1,d2,e,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a1=(c1[0]-'0')*10+c1[1]-'0';
	a2=(c2[0]-'0')*10+c2[1]-'0';
	b1=(s1[0]-'0')*10+s1[1]-'0';
	b2=(s2[0]-'0')*10+s2[1]-'0';
	if(s1[2]-'A'>=3){
		d1=1;
	} 
	else{
		d1=0;
	}
	if(s2[2]-'A'>=3){
		d2=1;
	}
	else{
		d1=0;
	}
	if(d1==0&&d2==0){
		int x=max(s1[2]-'A',s2[2]-'A')-min(s1[2]-'A',s2[2]-'A');
		if(x==1){
			e=1;
		}
	}
	
	if(a1==a2){
		if(b1==b2){
			if(d1==d2){
				if(d1==1&&d2==1){
					cout<<"1111";
				}
				else if(e==1){
					cout<<"1111";
				}
				else{
					cout<<"1110";
				}
			}
			else{
				cout<<"1100";
			}
		}
		else{
			cout<<"1000";
		} 
	}
	else{
		cout<<"0000";
	}
	return 0;
} 