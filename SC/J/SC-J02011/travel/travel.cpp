#include<bits/stdc++.h>
using namespace std;
string s,s1,x,x1;
bool cmp(char a,char b){
	return ('A'<=a&&a<='C'&&'A'<=b&&b<='C')||('D'<=a&&a<='F'&&'D'<=b&&b<='F');
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("travel.in","r",stdin);
	cin>>s>>s1>>x>>x1;
	
	freopen("travel.out","w",stdout);
	
	int cx1=0,cx2=0;
	cx1=(s[0]-'0')*10+s[1]-'0';
	cx2=(x[0]-'0')*10+x[1]-'0';
	
	if(cx1!=cx2)cout<<"0000";
	else{
		cout<<1;
		
		int h=0,h1=0;
		h=(s1[0]-'0')*10+s1[1]-'0';
		h1=(x1[0]-'0')*10+x1[1]-'0';
		
		if(h!=h1)cout<<"000";
		else{
			cout<<1;
			
			if(!cmp(s1[2],x1[2]))cout<<"00";
			else{
				cout<<1;
				
				if(abs(s1[2]-x1[2])==1)cout<<1;
				else cout<<0;
			}
		}
	}
	
	
	
	
	return 0;
}
