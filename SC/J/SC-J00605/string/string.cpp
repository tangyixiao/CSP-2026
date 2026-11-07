#include<bits/stdc++.h>
using namespace std;
int l=0;
int cnt;
char str[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=l;i<l+a;i++)str[i]=c;
		l+=a;
	}
	for(int i=0;i<l/2;i++)if(str[i]!=str[l-i-1])cnt++;
	cout<<cnt;
	return 0;
}