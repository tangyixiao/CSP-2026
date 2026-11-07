#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int L,sum=0,u=0,c=0;
	cin>>L;
	long long a;
	char b;
	char s[1000]={0};
	char s1[1000]={0};
	for(int i=0;i<=L-1;i++){
		cin>>a>>b;
		u=u+a;
		for(int j=c;j<=u-1;j++){
			s[j]=b;
			sum++;
		}
		c=a+c;
	}
	int j=0;
	for(int i=sum-1;i>=0;i--){
		s1[j]=s[i];
		j++;
	}
	sum=0;
	if(s==s1)
		cout<<0;
	else{
		for(int i=0;i<=L-1;i++){
			if(s[i]!=s1[i]){
				s[i]==s1[i];
				sum++;
			}
		}
	} 
	cout<<sum;
}
 
 
 
 
 
 
 
 
