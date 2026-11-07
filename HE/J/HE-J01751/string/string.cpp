#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char c;
	string s1,s3,s4;
	long long n,a,ans=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		while(a--)
			s1+=c;
		
	}
	 
	if(s1.size()%2==0){
		for(int i=0;i<=(s1.size()/2-1);i++){
			s3+=s1[i];
		}
		
		for(int i=s1.size()-1;i>=s1.size()/2;i--){
			s4+=s1[i];
		}
		
	}
	else{
		for(int i=0;i<=(s1.size()/2-1);i++){
			s3+=s1[i];
		}
		
		for(int i=s1.size()-1;i>=s1.size()/2+1;i--){
			s4+=s1[i];
		}
		
	}
	
	for(int i=0;i<=s3.size()-1;i++){
		if(s3[i]!=s4[i])
		ans++;
	}
	 	 
	cout <<ans;
	
	return 0;
}
