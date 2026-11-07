#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	long long n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	string s1="";
	long long sum1=0,sum2=0;
	for(int i=1;i<=n;i++){
		long long t;
		char ch;
		cin>>t >>ch;
		if(i==1){
			sum1+=t;
		}else if(i==2){
			sum2+=t; 
		} 
		for(long long j=0;j<=t-1;j++){
			s1+=ch;
		}
	}
	if(n==2){
		if(sum1==sum2){
			cout<<0;
			return 0;
		}
		cout<<min(sum1,sum2);
		return 0;
	}
	string s2="";
	long long d=s1.size()-1;
	for(long long i=0,j=d;i<=d;i++,j--){
		s2+=s1[j];
	}
	if(s1==s2){
		cout<<0;
		return 0;
	}
	long long sum=0;
	for(long long i=0;i<=d;i++){
		if(s1[i]!=s2[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
