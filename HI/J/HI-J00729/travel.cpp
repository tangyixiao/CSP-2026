#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		cout<<1;
	}
	int f1=1,f2=0,f3=0;
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]) f1=0;
	}
	if(f1==1)cout<<1;
	else cout<<0;
	if(s1[2]>='A'&&s1[2]<='C')f2=1;
	if(s2[2]>='A'&&s2[2]<='C')f3=1;
	if(f2==f3)cout<<1;
	else cout<<0;
	int cnt1=max(s1[2],s2[2]),cnt2=min(s1[2],s2[2]);
	if(f2==1&&f3==1){
		if((cnt1-cnt2)==1)cout<<1;
		else cout<<0;
	}else if(f2==0&&f3==0){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
