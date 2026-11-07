#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int ans=0;
	if(c1==c2){
		ans++;
		cout<<1;
	}
	if(ans==1&&s1[0]==s2[0]&&s1[1]==s2[1]){
		ans++;
		cout<<1;
	}
	if(ans==2&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
		ans++;
		cout<<1;
	}
	if(ans==3&&(s1[2]+1==s2[2]||s1[2]-1==s2[2])){
		ans++;
		cout<<1;
	}
	if(ans==3&&s1[2]>='D'&&(s1[2]+2==s2[2]||s1[2]-2==s2[2])){
		ans++;
		cout<<1;
	}
	for(int i=1;i<=4-ans;i++)cout<<0;
	return 0;
} 