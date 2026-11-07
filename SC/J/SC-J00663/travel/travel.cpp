#include<bits/stdc++.h>
using namespace std;
bool check(char x,char y){
	if((x=='A'||x=='B'||x=='C')&&(y=='D'||y=='F')){
			return false;
	}
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string s,t;
	cin>>a>>s>>b>>t;
	int n=(s[0]-'0')*10+s[1]-'0';
	int m=(t[0]-'0')*10+t[1]-'0';
	int ans1=0,ans2=0,ans3=0,ans4=0;
	char c1=s[2],c2=t[2];
	if(a==b){
		ans1=1;
		if(n==m){
			ans2=1;
			if(check(c1,c2)&&check(c2,c1)){
				ans3=1;
				if(((c1!='D'&&c2!='C')||(c1!='C'&&c2!='D'))&&(c1+1==c2||c2+1==c1)){
					ans4=1;
				}
			}
		}
	}
	cout<<ans1<<ans2<<ans3<<ans4;
}