#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,s1,c2,s2;
string x1,x2;
bool f1=0,f2=0,f3=0,f4=0;
ll a1,a2;
int main () {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>c1>>s1>>c2>>s2;
    x1+=s1[0];
    x1+=s1[1];
    x2+=s2[0];
    x2+=s2[1];
    if(c2==c1){
    	f1=1;
	}
	if(f1){
		if(x1==x2){
		f2=1;
	}
	}
	
	if(f2){
		if(s1[2]<'D'&&s2[2]<'D'){
			f3=1;
		}
		else{
			if(s1[2]>'C'&&s2[2]>'C'){
				f3=1;
			}
		}
	}
	
	a1=(s1[0]-'0')*10+(s1[1]-'0');
	a2=(s2[0]-'0')*10+(s2[1]-'0');
	if(f1){
		if(s1[2]==s2[2]){
		
		if(a1==a2+1||a1==a2-1)
		{
			f4=1;
		}
	}
	else{
		if(s1[2]=='D'){
			if(s2[2]=='F'){
				if(s1[0]==s2[0]&&s1[1]==s2[1]){
					f4=1;
				}
			}
		}
		else{
			if(s1[2]=='C'){
				if(s2[2]=='B'){
					
				if(s1[0]==s2[0]&&s1[1]==s2[1]){
					f4=1;
				}
			}
			}
			else{
				if(s1[2]=='F'){
					if(s2[2]=='D'){
						if(s1[0]==s2[0]&&s1[1]==s2[1]){
							f4=1;
						}
					}
				}
				else{
					if(s1[2]=='A'){
						if(s2[2]=='B'){
							if(s1[0]==s2[0]&&s1[1]==s2[1]){
								f4=1;
							}
						}
					}
					else{
						if(s1[2]=='B'){
							if(s2[2]=='A'||s2[2]=='C'){
								if(s1[0]==s2[0]&&s1[1]==s2[1]){
									f4=1;
								}
							}
						}
					}
				}
			}
		}
		}
	}
		cout<<f1<<f2<<f3<<f4;
	return 0;
}
