#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2,p,q;
	char x,y;
	cin>>c1>>p>>c2>>q;
	s1+=p[0];
	s1+=p[1];
	s2+=q[0];
	s2+=q[1];
	x=p[2];
	y=q[2];
	if(c1==c2){
		cout<<1;
		if(s1==s2){
			cout<<1;
			if((x<'D' && y<'D')||(x>='D'&&y>='D')){
				cout<<1;
				if(abs(x-y)==1)cout<<1;
				else cout<<0;
			}
			else{
				cout<<0<<0;
				return 0;
			}
		}
		else{
			cout<<0<<0<<0;
			return 0;
		} 
	}
	else {
		cout<<0<<0<<0<<0;
	}
	return 0;
}
