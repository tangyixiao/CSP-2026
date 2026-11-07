#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string b,a="";
	long long n,x,num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>b;
		for(int j=1;j<=x;j++){
			a+=b;
		}
	}
	long long len=a.size();
	for(long long i=0;i<len;i++){
		if(a[i]!=a[len-i-1]){
			num++;
		}
	}
	cout<<num/2; 
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

