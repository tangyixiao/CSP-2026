#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);	
	string c1,s1,c2,s2;
	int ans1,ans2,ans3,ans4;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans1=1;
	}else{
		ans1=0;
	}
	
	if(ans1==0){
		cout<<"0000";
	}else{
		cout<<ans1<<"000";
	}
	
	
	return 0;
}






