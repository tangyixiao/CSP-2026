#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
int n;
long long flag;
long long cnt=0;
char st[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		long long a;
		char s;
		cin>>a>>s;
		cnt+=a;
		for(long long j=flag;j<a+flag;j++){
			st[j]=s;
		}
		flag+=a;
	}
/*	for(int i=0;i<cnt;i++){
		cout<<st[i];
	}*/
	for(long long i=0;i<cnt/2;i++){
		//cout<<i<<endl;
		if(st[i]!=st[cnt-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}