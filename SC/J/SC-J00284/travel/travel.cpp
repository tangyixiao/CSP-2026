#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int summ=0;
	string s1, s2 ,c1, c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)cout<<1;
	else if(c1!=c2)cout<<0;
	if(s1==s2)cout<<000;
	else{
	for(int i=0;i<3;i++){
	if(s1[i]>='0'&&s2[i]<='9'&&s1[i]<='9'&&s2[i]>='0'){
		if(s1[i]==s2[i]&&summ==2){
		cout<<11;
		continue;}
		else if(s1[i]==s2[i])summ++;
		else {
		cout<<000;
		break;}
	}
	else if(s1[i]>='A'&&s1[i]<='C'&&s2[i]>='A'&&s2[i]<='C'){
	cout<<1;
	if(s1[i]-s2[i]==1||s1[i]-s2[i]==-1)
	cout<<1;
	else cout<<0;
	}
	else if(s1[i]>='D'&&s2[i]<='F'&&s2[i]>='D'&&s1[i]<='F'){
	cout<<1;
	if(s1[i]-s2[i]==1||s1[i]-s2[i]==-1)
	cout<<1;
	else cout<<0;
	}
	else cout<<0;
	}
	}
	return 0;
}