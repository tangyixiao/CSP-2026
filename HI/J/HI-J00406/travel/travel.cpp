#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int sum=0,smp=0;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			smp++;
		}
		else{
			cout<<0;
		}		
		if(smp==1&&s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'){
			cout<<1;
			sum++;
		}
		else{
			cout<<0;
		}		
		if(sum==1&&(s1[2]==s2[2]+1||s1[2]==s2[2]-1)){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}
