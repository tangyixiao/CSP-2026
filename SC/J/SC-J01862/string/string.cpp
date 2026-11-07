#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,sum=0,k=0;
	char s[100005];
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char s1;
		cin>>a>>s1;
		for(int i=sum+1;i<=sum+a;i++){
			s[i]=s1;
		}
		sum=sum+a;
	}
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum-i]){
			k++;
		} 
	}
	cout<<k;
	return 0;
} 