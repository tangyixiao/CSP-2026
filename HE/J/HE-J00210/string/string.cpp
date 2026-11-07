#include<bits/stdc++.h>
using namespace std;
string s="";
string c;
int a,n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	string s1=s;
	reverse(s1.begin(),s1.end());
	if(s1==s){
		cout<<0;
		return 0;
	}
	if(s.size()%2==1){
		long long y=0;
		long long sum=0;
		for(long long i=s.size()/2;i>=0;i--){
			if(s[i]!=s[i+y])sum++;
			y+=2;
		}
		cout<<sum;
		return 0;
	}else{
		long long y=1;
		long long sum=0;
		for(long long i=s.size()/2;i>=0;i--){
			if(s[i]!=s[i+y])sum++;
			y+=2;
		}
		cout<<sum;
		return 0;
	}
	return 0;	
} 
