#include <bits/stdc++.h>
using namespace std;
long long n;
long long number=0,length=0;
char s[1000000006];
char letter;
long long l=1,r,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(long long i=1;i<=n;i++){
		length+=number;
		cin>>number>>letter;
		for(long long j=length+1;j<=length+number;j++){
			s[j]=letter;
		}
	}
	length+=number;
	r=length;
	while(l<r){
		if(s[l]!=s[r])ans++;
		l++;
		r--;
	}
	
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}









