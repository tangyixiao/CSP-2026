#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
struct node{
	int k;
	char c;
}a[maxn];
string s,t;
string r,q;
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].k>>a[i].c;
	}
	int h=0;
	int g=1;
	int p=0;
	for(int i=1;i<=n;++i){
		h+=a[i].k;
	}
	for(int i=0;i<h;++i){
		s[i]=a[g].c;
		p+=1;
		if(p==a[g].k){
			g+=1;
			p=0;
		}
	}
	for(int i=0;i<h;++i){
		t[i]=s[i];
		r[i]=s[h-1-i];
		q[i]=s[h-1-i];
	}
	int ans=0;
	for(int i=0;i<h;++i){
		if(q[i]!=t[i]){
			ans++;
			q[i]=t[i];
			t[h-1-i]=q[i];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}