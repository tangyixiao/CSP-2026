#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n,num=0,numx=0;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=num;j<num+a;j++){
			s1[j]=c;
		}
		num+=a;
	}
	for(int i=0;i<num;i++){
		s2[i]=s1[num-i-1];
	}
	
	for(int i=0;i<num;i++){
		if(s1[i]!=s2[i]) numx++;
	}
	cout<<numx/2;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}