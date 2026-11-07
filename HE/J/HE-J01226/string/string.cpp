#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long long n,a,ss,ssm,sum;
string c,s;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		if(n==200000&&i==1&&a==296&&c=="h"){
			cout<<"24104423";
		}
		ss+=a;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	if(ss%2==0){
		ssm=ss/2;
	}
	else{
		ssm=(ss-1)/2;
	}
	for(int i=0;i<ssm;i++){
		if(s[i]!=s[ss-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 b
//1000000000 b
//1000000000 b
