#include<bits/stdc++.h>
#define int long long
using namespace std;
string n1,n,a,a1;
char s,s1,m,m1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>n>>a>>n1>>a1;
	s=a[2];s1=a1[2];
	m=a[1];m1=a[1];
	if(m==m1&&n==n1){
		cout<<"11";
		if(s=='C'&&s1=='D'||s1=='D'||s1=='C'){
			cout<<"00";
		}
		else if(s==char(s1+1)||s==char(s1-1)){
			cout<<"11";
		}
		else{
			cout<<"10";
			return 0;
		}
	}
	
	else cout<<"0000";
	return 0;
}
