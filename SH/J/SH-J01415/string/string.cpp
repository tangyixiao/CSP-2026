#include<bits/stdc++.h>
using namespace std;
const int N=1e8+5;
int n,len=0,ans;
long long l;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ai;
		char ci;
		cin>>ai>>ci;
		l+=ai;
		for(int j=1;j<=ai;j++){
			len++;
			c[len]=ci;
		}
	} 
	for(int i=1;i<=len/2;i++){
		if(c[i]!=c[len-i+1])ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
