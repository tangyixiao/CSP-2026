#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
	cin>>c1>>c2>>c3>>c4>>c5>>c6>>c7>>c8>>c9>>c10;
	if(c1==c6&&c2==c7){
		cout<<'1';
		if(c3==c8&&c4==c9){
			cout<<'1';
			if((c5==c10+1||c5==c10-1)&&((c5<'D'&&c10<'D')||(c5>='D'&&c10>='D'))) cout<<"11";
			else if((c5<'D'&&c10<'D')||(c5>='D'&&c10>='D')) cout<<"10";
			else cout<<"00";
		}
		else cout<<"000";
	} 
	else cout<<"0000";
	return 0;
}
