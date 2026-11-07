#include<bits/stdc++.h>
using namespace std;
//回文串：只需要使得前后两段相等即可
//直接暴力混分即可 
char s[(int)2e5+10];
int num[(int)2e5+10];
int l[(int)2e5+10],r[(int)2e5+10];
unsigned long long ans=0,len=0;
char a[(int)1e8+10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("string.in","r",stdin);
	
	int len=0;
	
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i]>>s[i];
		for(int j=1;j<=num[i];j++)a[++len]=s[i];
	}
	
	//i,len-i+1
	for(int i=1;i<=len/2;i++){
		if(a[i]!=a[len-i+1])ans++; 
	}
	
	freopen("string.out","w",stdout);
	cout<<ans;
	 
	
	
	
	
	return 0;
}
