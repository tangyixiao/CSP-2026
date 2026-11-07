#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a;
string rs,rc,ans,xs,xc;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>rc>>rs>>xc>>xs;
	ans[0]='0';ans[1]='0';ans[2]='0';ans[3]='0';
	if(rc==xc){
		//cout<<"A"<<endl;
		ans[0]='1';//同一节车厢 
		if(rs[0]==xs[0]&&rs[1]==xs[1]){
			//cout<<"B"<<endl;
			ans[1]='1';//同一排 
			if((rs[2]=='F'&&xs[2]=='D')||(rs[2]=='D'&&xs[2]=='F')){
				//cout<<"C"<<endl;
				//cout<<"D"<<endl;
				ans[2]='1';//都在右侧
				ans[3]='1';
			}else if(rs[2]!='F'&&rs[2]!='D'&&xs[2]!='F'&&xs[2]!='D'){//左侧 
				//cout<<"C"<<endl;
				ans[2]='1';
				if((rs[2]=='A'&&xs[2]=='B')||(rs[2]=='B'&&xs[2]=='A')){//AB
					//cout<<"D"<<endl;
					ans[3]='1';
				}else if((rs[2]=='B'&&xs[2]=='C')||(rs[2]=='C'&&xs[2]=='B')){//BC
					//cout<<"D"<<endl;
					ans[3]='1';
				}
			}
		}
	}
	
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	return 0;
}