#include <bits/stdc++.h>
using namespace std;
int c,s;
char a[3],b[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>a[0]>>a[1]>>a[2]>>s>>b[0]>>b[1]>>b[2];
	if(c==s){
		if(a[0]==b[0]&&a[1]==b[1]){
			if((a[2]<='C'&&b[2]<='C')||(a[2]>='D'&&b[2]>='D')){
				if(a[2]+1==b[2]||a[2]-1==b[2]) cout<<"1111";
				else cout<<"1110"; 
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}
