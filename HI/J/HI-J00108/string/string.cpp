#include<bits/stdc++.h>
using namespace std;
long long n,sum;
string s,s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		int a;
		char b;
		cin>>a>>b;
		if(n==1){
		cout<<0;
		return 0;
	}
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}
	int p=s.size()/2;
	if(p<s.size()/2.0){
		for(int i=0;i<p;i++){
			s1+=s[i];
		}
		
		for(int i=p+1;i<=s.size();i++){
			s2+=s[i];
		}
		if(s1!=s2){
			for(int i=0;i<=s1.size();i++){
				if(s1[i]!=s2[i]){
					sum++;
				}
			}
			cout<<sum;
		}
		else cout<<0;
	}
	else{
		for(int i=0;i<p;i++){
			s1+=s[i];
		}
		
		for(int i=p;i<=s.size();i++){
			s2+=s[i];
		}
		if(s1!=s2){
			for(int i=0;i<=s1.size();i++){
				if(s1[i]!=s2[i]){
					sum++;
				}
			}
			cout<<sum;
		}
		else cout<<0;
	}
	
	return 0;
} 
