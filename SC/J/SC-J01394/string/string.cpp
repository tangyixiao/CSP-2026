#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long a,m=0,sum=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		char c;
		int b;
		cin>>b>>c;
		for(int j=0;j<b;j++){
			s[j+m]=c;
		}
		m+=b;
	}
	if(m%2!=0){
		long long i=0,j=m-1;
		while(j-i!=0){
			if(s[i]!=s[j]) sum++;
			i++;
			j--;
		}
	}else{
		long long i=0,j=m-1;
		while(j-i!=-1){
			if(s[i]!=s[j]) sum++;
			i++;
			j--;
		}
	}
	
	cout<<sum;
	
	return 0;



} 