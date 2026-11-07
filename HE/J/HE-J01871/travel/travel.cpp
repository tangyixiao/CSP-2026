#include<bits/stdc++.h>
using namespace std;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long c=0,x;
	string c1,s1,c2,s2,s;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0;i<=1;i++){
		if(s1[i]==s2[i]){
			c++;
		}
	}
	if(c==2){
		cout<<1; 
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	if(c==2&&s1[2]>='D'&&s2[2]>='D'){
		x=1;
		cout<<1;
	}else if(c==2&&s1[2]<'D'&&s2[2]<'D'){
		x=1;
		cout<<1;
	}else{
		x=0;
		cout<<0<<0;
		return 0;
	}
	if(x==1){
		if(s1[2]+1==s2[2]||s1[2]-1==s2[2]){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0;
	}
	return 0;
}
