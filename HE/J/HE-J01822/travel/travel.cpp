#include<bits/stdc++.h> 
using namespace std;
int ans1,ans2,ans3,ans4;
int ra,xa;
char rb[3];
char xb[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>ra;
	cin>>rb;
	cin>>xa;
	cin>>xb;
	if(ra==xa){
		ans1=1;
	}
	
	else{
		cout<<"0000";
		return 0;
	}
	
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}
