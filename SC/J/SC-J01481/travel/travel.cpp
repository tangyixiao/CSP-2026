#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string s1[4],s2[4],s3[6];
	s3[1]='A';
	s3[2]='B';
	s3[3]='C';
	s3[4]='D';
	s3[5]='E';
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>s1[i];
	}
	cin>>b; 
	for(int i=1;i<=3;i++){
		cin>>s2[i];
	}
	if(a==b){
		cout<<1;
		if(s1[1]==s2[1]&&s1[2]==s2[2]){
			cout<<1;
			int cmp=0;
			if(s1[3]==s3[1]||s1[3]==s3[2]||s1[3]==s3[3]&&s2[3]==s3[4]||s2[3]==s3[5])	cmp=1;
			if(s1[3]==s3[4]||s1[3]==s3[5]&&s2[3]==s3[1]||s2[3]==s3[2]||s2[3]==s3[3])	cmp=1;
			if(cmp==0){
				cout<<1;
				int t=0;
				if(s1[3]==s3[1]&&s2[3]==s3[2])	t=1;
				if(s1[3]==s3[2]&&s2[3]==s3[3]||s2[3]==s3[1])	t=1;
				if(s1[3]==s3[3]&&s2[3]==s3[2])	t=1;
				if(s1[3]==s3[4]&&s2[3]==s3[5])	t=1;
				if(s1[3]==s3[5]&&s2[3]==s3[4])	t=1;
				cout<<t;
			}
			else cout<<00;
		}
		else cout<<000;
	}	
	else cout<<0000;
	return 0;
} 