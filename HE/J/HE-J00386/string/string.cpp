#include<bits/stdc++.h>
using namespace std;
long long n,a;
string s,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		while(a--){
			s+=c;
		}
	}
	long long l=s.size(),sum=0;
	for(long long i=0;i<l/2-1;i++){
		for(long long j=l-1;j>=l/2+1;j--){
			if(s[i]!=s[j]){
				s[j]=s[i];
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
