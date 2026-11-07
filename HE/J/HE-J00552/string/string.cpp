#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
int n;
int a[maxn];
char b[maxn];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	if(n<=1){
		cout<<0<<endl;
		return 0;
	}
	
}
