#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int sr,sx;
int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(s1[0]!=48){
		sr=10;
		sr+=s1[1]-48;
	}
	else sr=s1[1]-48;
	if(s2[0]!=48){
		sx=10;
		sx+=s2[1]-48;
	}
	else sx=s2[1]-48;
	if(c1==c2){
		cout<<1;
		if(sr==sx){
			cout<<1;
			if((s1[2]<=67&&s2[2]<=67)||(s1[2]>67&&s2[2]>67)){
				cout<<1;
				if (abs(s1[2]-s2[2])==1){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}