#include<bits/stdc++.h>
using namespace std;
int n;
int a;
char c;
int idx;
char s[100000005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--)s[++idx]=c;
	}
	int j=idx;
	for(int i=1;i<=idx;i++){
		if(s[i]!=s[j])ans++;
		if(i==j)break;
		if(i==j-1)break;
		j--;
	}
	cout<<ans;
	return 0;
}
