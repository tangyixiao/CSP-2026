#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long  c;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n=0;
	cin>>n;
	long long s=n,k=0,m=0;
	for(long long i=0;i<n;i++){
		cin>>c>>a;
		for(long long j=0;j<c;j++){
			s1[j]=a;
			s2[s]=a;
			s--;
		}
	}
	for(long long i=0;i<n;i++){
		if(s1[i]!=s2[i]){
			k++;
		}
	}
	if(k==0){
		cout<<0;
	}
	else cout<<k;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
