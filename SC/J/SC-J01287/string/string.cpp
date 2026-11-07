#include <bits/stdc++.h>
using namespace std;
long long n,a;
char b;
string s,s2;
int main(){
	cin.tie();
	cout.tie();
	cin>>n;
	if(n%2==0){
		for(long long i=1;i<=n;i++){
			cin>>a>>b;
			if(i<=n/2){
				for(long long j=1;j<=a;j++){
					s+=b;
				}
			}
			else{
				for(long long j=1;j<=a;j++){
					s2+=b;
				}
			}
		}
	}
	else{
		for(long long i=1;i<=n;i++){
			cin>>a>>b;
			if(i<=n/2){
				for(long long j=1;j<=a;j++){
					s+=b;
				}
			}
			else if(i>=n/2+2){
				for(long long j=1;j<=a;j++){
					s2+=b;
				}
			}
		}
	}
	long long sum=0;
	long long z=s.size()-1;
	for(long long i=0;i<s.size();i++){
		if(s[i]!=s2[z]) sum++;
		z--;
	}
	cout<<sum;
	return 0;
} 