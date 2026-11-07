#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int c1,c2;
	cin>>c1>>s1>>c2>>s2;
	int n1,n2;
	n1=0,n2=0;
	char m1,m2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<s1.length();i++){
		if(s1[i]-'0'>=0 && s1[i]-'0'<=9){
			n1*=10;
			n1+=s1[i]-'0';
			//cout<<"\n s1:"<<s1[i]-'0'<<" "<<n1<<" ";
		}else{
			m1=s1[i];
		}
	}
//	cout<<n1<<" "<<m1;
	for(int i=0;i<s2.length();i++){
		if(s2[i]-'0'>=0 && s2[i]-'0'<=9){
			n2*=10;
			n2+=s2[i]-'0';
			//cout<<"\n s1:"<<s1[i]-'0'<<" "<<n1<<" ";
		}else{
			m2=s2[i];
		}
	}
//	cout<<"\n "<<n2<<" "<<m2;
bool f=false;
	if(n1==n2){
		cout<<"1";
		if((m1=='A'||m1=='B'||m1=='C')&&(m2=='A'||m2=='B'||m2=='C')){
			cout<<"1";
		}else if((m1=='D'||m1=='F')&&(m2=='D'||m2=='F')){
			cout<<"1"; 
		}else{
			f=true;
		}
	}else{
		cout<<"000";
		return 0;
	}
	if(f){
		cout<<"00";
		return 0;
	}
	if(m1+1==m2 || m1-1==m2 || (m1=='D'&&m2=='F')) cout<<"1";
	else cout<<"0";
	return 0;
}