#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	int ans=4;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
		ans--;
		if(a2[0]+a2[1]==b2[0]+b2[1]){
			cout<<1;
			ans--;
			int a=a2[2]-64,b=b2[2]-64;
			if((a<4&&b<4)||(a>3&&b>3)){
				cout<<1;
				ans--;
				if(abs(a-b)==1){
					cout<<1;
					ans--;
				}
			}
		}
	}
	while(ans){
		cout<<0;
		ans--;
	}
	return 0;
} 
