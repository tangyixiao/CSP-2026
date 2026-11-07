#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string> 
long long n;
std::string st;
int main(){
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout); 
	std::cin>>n;
	long long ln=-1;
	for(long long i=0;i<n;i++){
		long long a;
		std::string b;
		std::cin>>a>>b;
		ln+=a;
		for(int j=0;j<a;j++){
			st+=b;
		}
	}
	long long l=0,r=ln,cnt=0;
	while(l<r){
		if(st[l]!=st[r]){
			cnt++;
		}
		l++;r--;
	}
	std::cout<<cnt<<std::endl;
	return 0;
}
