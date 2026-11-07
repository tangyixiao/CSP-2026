#include<bits/stdc++.h>
using namespace std;
int n;
char c;
unsigned long long a,l[200005],cnt,sum;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++)s[++cnt]=c;
	}
	int cnt1=cnt/2;
	for(int i=1;i<=cnt1;i++)if(s[i]!=s[cnt-i+1])sum++;
	cout<<sum;
	return 0;
}
