#include<bits/stdc++.h>
using namespace std;
string s1,s2;
char a3,b3,a1,a2,b1,b2;
bool q=1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>a1>>a2>>a3>>s2>>b1>>b2>>b3;
	if(s1==s2){
		cout<<1;
		
	}else{
		q=0;
		cout<<0;
	}
	int m=a3-65,n=b3-65;
	if(m<n){
		swap(m,n);
	}
	if(a1*10+a2==b1*10+b2&&m!=n){
		cout<<1;
		
		if(a3-65<3&&b3-65<3||m>=3&&n>=3){
			cout<<1;
			
		}else{
			cout<<0;
			q=0;
		}
	}else{
		cout<<0<<0;
		q=0;
	}
	if(q&&m-n==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 