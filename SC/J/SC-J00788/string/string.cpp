#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,a,m=0,t;
	string s,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c[0];
		for(int j=1;j<=a;j++)
			s[ans+j-1]=c[0];
		ans+=a;
	}if(ans%2==1){
		t=ans/2;
		for(int i=0;i<t;i++)
			if(s[i]!=s[ans-1-i]) m++;
		cout<<m;
	}
	else{
		t=ans/2;
		for(int i=0;i<t;i++)
			if(s[i]!=s[ans-1-i]) m++;
		cout<<m;
	}
	return 0;
}