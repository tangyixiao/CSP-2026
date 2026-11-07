#include<bits/stdc++.h>
using namespace std;
int ans1,ans2,ans3,ans4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) ans1=1;
	if(a2[0]==b2[0] && a2[1]==b2[1] && ans1==1) ans2=1;
	if(ans1==1 && ans2==1){
		if(a2[2]=='D' && b2[2]=='C' || b2[2]=='D' && a2[2]=='C'){
			ans3=0;ans4=0;
		}else if(a2[2]-b2[2]==1 || b2[2]-a2[2]==1){
			ans3=1;ans4=1;
		}else if(a2[2]=='D' && b2[2]=='F' || b2[2]=='D' && a2[2]=='F'){
			ans3=1;ans4=1;
		}else if(a2[2]=='C' && b2[2]=='A' || b2[2]=='C' && a2[2]=='A') {
			ans3=1;ans4=0;
		}else {
			ans3=0;ans4=0;
		}
	}else{
		ans3=0;ans4=0;
	}
	
	
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}
