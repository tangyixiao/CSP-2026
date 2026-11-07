#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,b=0;
	cin>>n;
	int a[n];
	string s,s1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>s;
		b+=a[i];
	}
	for(int i=0;i<n;i++){
		for(int i=0;i<a[i];i++){
			s1=s1+s[i];
		}
	}
	int q=1,sum=0;
	if(n%2==0){
		q=2;
		for(int i=n/2+1;i<n;i++){
			if(s1[i]!=s1[i-q]){
				sum++;
			}
			q+=2;
		}
	}else{
		for(int i=n/2;i<n;i++){
			if(s1[i]!=s1[i-q]){
				sum++;
			}
			q+=2;
		}
	}
	
	cout<<sum;
	
	return 0;
} 

