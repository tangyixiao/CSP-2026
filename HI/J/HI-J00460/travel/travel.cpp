#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int cnt,ans,sum,num[20];
int a[20],b[20];
int temp=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else cout<<0;
	for(int i=0;i<2;i++){
		if(s1[i]>='0'&&s1[i]<='18'){
			a[++cnt]=s1[i]-'0';
		}
		if(s2[i]>='0'&&s2[i]<='18'){
			b[++ans]=s2[i]-'0';
		}
	}
	if(s1==s2){
		cout<<0<<0<<0;
		return 0;
	}else if(a[cnt]==b[ans]&&s1!=s2) cout<<1;
	else cout<<0;
	for(int i=0;i<2;i++){
		if(s1[i]=='A'||s2[i]=='A') {
			sum==1; num[i]+=1;
		}else if(s1[i]=='B'||s2[i]=='B'&&s1[i]!=s2[i]){
			sum==2; num[i]+=2;
		}else if(s1[i]=='C'||s2[i]=='C'&&s1[i]!=s2[i]){
			sum==3; num[i]+=3;
		}else if(s1[i]=='D'||s2[i]=='D'&&s1[i]!=s2[i]){
			sum==4; num[i]+=4;
		}else if(s1[i]=='F'||s2[i]=='F'&&s1[i]!=s2[i]){
			sum==5; num[i]+=5;
		}
		temp=num[i];
		if(num[i-1]<4&&temp<4){
			cout<<1;
			break;
		}else if(num[i-1]>3&&temp<6){
			cout<<1;
			break;
		}else if(num[i-1]<4&&temp>4||num[i-1]>4&&temp<4){
			cout<<0<<0;
			return 0;
		}
	}
	for(int i=0;i<2;i++){
		int xun=num[i+1];
		if(num[i+1]==xun){
			cout<<1;
			break;
		}else{
			cout<<0;
			break;
		}
	}
	return 0;
} 
