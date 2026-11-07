#include<bits/stdc++.h>
using namespace std;

int n;
char a[100000005];
long long len=0;
long long cnt;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		long long x;
		char c;
		cin>>x>>c;
		for(int j=len+1;j<=len+x;++j){
			a[j]=c;
		}
		len+=x;
	}
	for(int i=1,j=len;i<=len/2;i++,j--){
		if(a[i]!=a[j]){
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
