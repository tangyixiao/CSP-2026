#include<bits/stdc++.h>
using namespace std;
int change(string s){
	if(s[2]=='A'){
		return 1;
	}else if(s[2]=='B'){
		return 2;
	}else if(s[2]=='C'){
		return 3;
	}else if(s[2]=='D'){
		return 5;
	}else if(s[2]=='F'){
		return 6;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0);
	int cnt=0;
	int ans=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		if(c1[i]==c2[i]){
			cnt++;
		}
		if(s1[i]==s2[i]){
			ans++;
		}
	}
	if(cnt==2){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(ans==2){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	int a=change(s1);
	int b=change(s2);
	if(a==3&&b==5){
		cout<<0<<0;
		return 0;
	}else if(a==5&&b==3){
		cout<<0<<0;
		return 0;
	}
	if(a+1==b||b+1==a){
		cout<<1<<1;
		return 0;
	}else if(a+2==b||b+2==a){
		cout<<1<<0;
		return 0;
	}
	return 0;
}
