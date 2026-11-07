#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int sum,ans;
bool flag=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>s1>>s2;
	for(int i=0;i<c1.size();i++){
		if(c1[i]!=s1[i]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<1;
		for(int i=0;i<2;i++){
			sum=sum*10+c2[i]-'0';
			ans=ans*10+s2[i]-'0';
		}
		if(ans==sum){
			cout<<1;
			char x=c2[2];
			char y=s2[2];
			if(x>='D'&&y>='D'){
				cout<<1;
				if(x=='F'&&y=='D'||x=='D'&&y=='F'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(x<='C'&&y<='C'){
				cout<<1;
				if(x=='A'&&y=='B'||x=='C'&&y=='B'||x=='B'&&y=='A'||x=='B'&&y=='C'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0;
				cout<<0;
			}
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}