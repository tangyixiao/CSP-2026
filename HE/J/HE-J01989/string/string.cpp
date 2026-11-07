#include<bits/stdc++.h>
using namespace std;
string s;
char c;
int n;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int b;
	for(int i=1;i<=n;i++){
		cin>>b>>c;
		sum+=b;
		for(int j=1;j<=b;j++){
			s+=c;
		}
	}
	long long x=0;
	if(sum%2==0) x=sum/2;
	else x=sum/2+1;
	long long ss=0; 
	for(long long i=0;i<=x-1;i++){
		if(s[i]!=s[sum-1-i]) ss++;
	}
	cout<<ss<<endl;
}
