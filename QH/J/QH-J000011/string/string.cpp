#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int n;
	cin>>n;
	int m[n],c=0,he=0,count=0;
	char s[n];
	for(int i=0;i<n;i++){
		cin>>m[i]>>s[i];
	}
	for(int i=0;i<n;i++){
		he+=m[i];
	}
	string S("0",he);
	for(int i=0;i<n;i++){
		for(int j=0;j<m[i];j++){
			S[c+j]=s[i];
		}
		c+=m[i];
	}
	for(int i=0;i<he/2;i++){
		if(S[i]!=S[he-1-i]) count++;
	} 
	cout<<count;
	fclose(stdin);
	fclose(stdout);
} 
