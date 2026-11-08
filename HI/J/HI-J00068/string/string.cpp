#include <iostream>
#include <cmath>
using namespace std;
int main(){
	freeopen("string.in","r",stdin);
	freeopen("string.out","w",stdout);
	long long n,sum=0,d;
	cin>>n;
	string s;
	s="";
	long long a;
	string b; 
	for(long long i=0;i<n;i++){
		cin>>a>>b;
		for(long long i=0;i<a;i++){
			s+=b;
		}
	}
	for(int i=0;i<s.length()/2;i++){
		if(s[i]!= s[s.length()-i-1]) {
			sum++;
		}
	}
	
	cout<<sum;
}
