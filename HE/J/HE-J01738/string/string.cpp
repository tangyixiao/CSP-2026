#include<bits/stdc++.h>
using namespace std;
int a,b;
char s[99999999];
char c;
int sum=0;
int cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>c;
		for(int i=0;i<b;i++){
			s[sum]=c;
			sum++;
		}
	}
	int len=sum/2;
	for(int i=0;i<len;i++){
		if(s[i]!=s[i+len])cnt++;
	}cout<<cnt;
	return 0;
}
