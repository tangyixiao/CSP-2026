#include<bits/stdc++.h>
using namespace std;
char str[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int l=1;l<=a;l++){
			str[++cnt]=c;
		}
	}
	int ans=0;
	for(int i=1,j=cnt;i<=cnt/2;i++,j--){
		if(str[i]!=str[j]) ans++;
	}
	cout<<ans;
	return 0;
}