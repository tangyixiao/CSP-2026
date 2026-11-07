#include<bits/stdc++.h>
using namespace std;

string s1;
string s2;
string s;
string ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>ss>>s2;         //s:一号车厢 ss:二号车厢  
	int x , y;
	x=(s[0]-'0')*10+s[1];
	y=(ss[0]-'0')*10+ss[1];
	if(x==y){
		cout<<1;
		int x1=(s1[0]-'0')*10+s1[1];
		int y1=(s2[0]-'0')*10+s2[1];
		if(x1==y1){
			cout<<1;
			if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>='D'&&s2[2]>='D')){
				cout<<1;
				if(abs(s1[2]-s2[2])==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
} 
