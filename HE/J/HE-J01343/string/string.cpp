#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int i,j;
	int n,a; char c; string s,s1,s2; int l,sum=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>c;
		for(j=0;j<a;j++){
			s+=c;
		}
	} 
	l=s.size();
	for(i=l-1;i>=0;i--){
		s1+=s[i];
	}
	if(s==s1){
		cout<<0;
	}
	else{
		for(i=0;i<l/2;i++){
			s2+=s[i];
			if(s2!=s){
				sum++;
			}
		}
		cout<<sum;	
	}
	return 0;
}
