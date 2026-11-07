#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;//车厢号、座位号
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0] && c1[1]==c2[1])               //同一个车厢 
	{
		cout<<"1";  
		if(s1[0]==s2[0] && s1[1]==s2[1])           //同一行 
		{
			cout<<"1";
			char r=s1[2],x=s2[2];
			if(r>='A' && r<='C' && x>='A' && x<='C')//同一侧 
			{
				cout<<"1";
				if((r=='A' && x=='B') || (r=='B' && (x=='A' || x=='C')) || (r=='C' && x=='B')) cout<<"1";             //相邻 
				else cout<<"0"; 
			}
			else if((r=='D' && x=='F') || (r=='F' && x=='D')) cout<<"11";		
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	return 0;
}
