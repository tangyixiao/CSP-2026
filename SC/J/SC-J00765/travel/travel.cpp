#include<bits/stdc++.h>
using namespace std;
string rc,rs,xc,xs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	if(rc!=xc)cout<<"0000";
	else {
		char sone=rs[0],stwo=xs[0];
		if(sone!=stwo)cout<<"1000";
		else {
			sone=rs[1];stwo=xs[1];
			if(sone!=stwo)cout<<"1000";
			else {
				sone=rs[2];stwo=xs[2];
				if(sone<'D'&&stwo<'D'){
					if(sone=='B'||stwo=='B')cout<<"1111";
					else cout<<"1110";
				}else if(sone>='D'&&stwo>='D')cout<<"1111";
				else cout<<"1100";
			}
		}
	}
	return 0;
} 