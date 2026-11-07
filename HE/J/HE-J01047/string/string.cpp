#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	long long n,a,b,num=0,r=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		char c;
		cin>>c;
		num+=a;
		for(long long j=0;j<a;j++){
			s1=s1+c;
		}
	}
	for(int i=num-1;i>=0;i--){
		s2=s2+s1[i];
	}
	for(int i=0;i<num;i++){
        if(s1[i]!=s2[i])r+=1;
        else break;
	}
	if(r==num) r=r/2;
	cout<<r;
	return 0;
}
