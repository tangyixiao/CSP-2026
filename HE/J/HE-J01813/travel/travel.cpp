#include<bits/stdc++.h>
using namespace std;
string n,n1,a,a1;
char s,s1,m,m1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>n1>>a1;
	s=a[2];
	s1=a1[2];
	m=a[1];
	m1=a1[1];
	//cout<<m<<"     "<<m1<<endl;
	if(n==n1){
		cout<<'1';
	}else{
		cout<<"0000";
		return 0;
	}
	if(m==m1){
		cout<<1;
		if(s=='C'&&s1=='D'||s=='D'&&s=='C'){
			cout<<"00";
			return 0;
		}else if(s==char(s1+1)||s==char(s1-1)){
			cout<<"11";
			return 0;
		}else{
			cout<<"10";
			return 0;
		}
	}else{
		cout<<"000";
	}
	return 0;
}
		
