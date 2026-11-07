#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a=0,b=0,c=0,d=0;
	if(c1==c2){
		a = 1;
		if(s1[1]==s2[1] && s1[0]==s2[0]){
			b = 1;
			bool m = (s1[2]>='A'&&s1[2]<='C'),n = (s2[2]>='A'&&s2[2]<='C');
			if(m==n){
				c = 1;
				if(abs(int(s1[2])-int(s2[2]))==1){
					d = 1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}