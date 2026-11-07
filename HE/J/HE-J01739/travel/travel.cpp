#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	cin>>c1>>c2>>s1>>s2;
	if(c1==s1){
		if(abs(s2-c2)==1){
			cout<<"1111";
		}
		else if(abs(s2-c2)!=1){
			cout<<"1110";
		}
		else{
			cout<<"1000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
