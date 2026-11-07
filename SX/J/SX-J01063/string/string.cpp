#include<bits/stdc++.h>
using namespace std;
const long long N=10000000005;
char a[N];
int n,m;
long long q=1,ans;
char s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>s;
		for(int j=1;j<=m;j++){
			a[q]=s;
			q++;

		}
	}
	long long j=q-1;
	long long mid=(q-1)/2;

	for(long long i=1;i<=mid;i++){
		if(a[i]!=a[j]){
			ans++;

		}
		j--;
	}
	cout<<ans;


	return 0;
}