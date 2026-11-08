#include<bits/stdc++.h>
using namespace std;
int a,b,x,y,u,i;
string s,t;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>t;
	if(a!=b||a==1||b==1||a==16||b==16) cout<<"0000";
	else{
		x=int(s[0]-'0')*10+int(s[1]-'0');
		y=int(t[0]-'0')*10+int(t[1]-'0');
		if(x!=y) cout<<"1000";
		else{
			u=int(s[2]-'A');
			i=int(t[2]-'A');
			if(u<=2&&i<=2){
				if(u==2||u==0){
					if(i!=1) cout<<"1110";
					else cout<<"1111";
				}else cout<<"1111";
			}else if(u>=3&&i>=3) cout<<"1111";
			else cout<<"1100"; 
		}
	}
	
	return 0;
}
