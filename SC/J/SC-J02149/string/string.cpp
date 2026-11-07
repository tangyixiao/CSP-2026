#include<bits/stdc++.h>
using namespace std;
string s;
long long n,a,w,num;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		std::cin>>a>>c;
		num+=a;
		for(long long j=0;j<a;j++){
			s+=c;
		}
	}
	for(long long i=(num+1)/2;i<num;i++){
		if(s[i]!=s[num-i-1]){
			w++;
		}
	}
	std::cout<<w;
	return 0;
} 

