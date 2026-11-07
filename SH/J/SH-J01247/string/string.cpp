#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int ans=0;
int main()
{
	int n,a,cnt=0,ddd=0;
	char s[2000000],c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		cnt+=a;
		for(int j=0;j<a;j++){
			s[i]=c;
		}
	}
	for(int i=0;i<=cnt/2+1;i++){
		if(s[i]!=s[cnt-i]){
			ans+=1;
			
		}
	} 
	cout<<ans; 
	return 0;
}
