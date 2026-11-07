#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,ans="";
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>='D'&&s2[2]>='D')){
				int x1=s1[2],x2=s2[2],flag=1;
				if(x1>x2){
					swap(x1,x2);	
				}
				if(x1=='A'&&x2=='C'){
					ans="1110";
				}
				else{
					ans="1111";
				}
			}
			else{
				ans="1100";
			}
		}
		else{
			ans="1000";
		}
	}
	else{
		ans="0000";
	}
	cout<<ans;
	return 0;
}
