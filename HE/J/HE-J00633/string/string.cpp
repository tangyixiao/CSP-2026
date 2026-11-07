#include<bits/stdc++.h>
using namespace std;

string s1,s2;
long long n;

void init(){
	long long i,j;
	long long t;
	char k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>t;
		cin>>k;
		for(j=0;j<t;j++){
			s1+=k;
		}
	}
}

void qyj(){
	long long i;
	char k;
	long long h=0;
	for(i=s1.length()-1;i>=0;i--){
		k=s1[i];
		s2+=k;
	}
	for(i=0;i<s1.length();i++){
		if(s1[i]!=s2[i]){
			h++;
		}
	}
	cout<<(h/2);
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	init();
	qyj();
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
