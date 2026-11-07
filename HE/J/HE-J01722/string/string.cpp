#include<bits/stdc++.h>
using namespace std;
long long n; 
string s;
long long sum;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long v;
		cin>>v;
		char a;
		cin>>a;
		sum+=v;
		for(long long j=0;j<v;j++){
			s[i+j]=a;
		}
	}
	if(v%2==0){
		for(int i=0;i<v/2;i++){
			
		}
	}
	return 0;
} 
