#include<bits/stdc++.h>
using namespace std;
string car1,car2,seat1,seat2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>car1>>seat1>>car2>>seat2;
	for(int i=0;i<=3;i++){
		ans[i]='0';
	}
	if(car1==car2){
		ans[0]='1';
		
		if(seat1[0]==seat2[0]&&seat1[1]==seat2[1]){
			ans[1]='1';
			if((seat1[2]<='C'&&seat2[2]<='C')||(seat1[2]>='D')&&(seat2[2]>='D')){
				ans[2]='1';
				
				if((seat1[2]-seat2[2]==1)||(seat2[2]-seat1[2]==1)){
					ans[3]='1';
				}
			}
		}
	}
	for(int i=0;i<4;i++){
		cout<<ans[i];
	}
	return 0;
} 
