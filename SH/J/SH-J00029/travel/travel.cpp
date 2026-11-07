#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;//s座位号 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool a=0,b=0,c=0,d=0;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}

	else if(c1==c2){
		a=1;//同车 
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			b=1;//同排 
			if(s1[2]>='A' && s1[2]<='C'){
				if(s2[2]>='A' && s2[2]<='C'){
					c=1;//同一排，且位于过道的同一侧
					if(s1[2]=='A'){
						if(s2[2]=='B') d=1;
					}
					else if(s1[2]=='B'){
						if(s2[2]=='C' && s2[2]=='A') d=1;
					}
					else if(s1[2]=='C'){
						if(s2[2]=='B') d=1;
					}
				}
			}
			
			else if(s1[2]>='D' && s1[2]<='F'){
				if(s2[2]>='D' && s2[2]<='F'){
					c=1;//同一排，且位于过道的同一侧
					if(s1[2]=='D'){
						if(s2[2]=='F') d=1;
					}
					else if(s1[2]=='F'){
						if(s2[2]=='D') d=1;
					}
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
} 
