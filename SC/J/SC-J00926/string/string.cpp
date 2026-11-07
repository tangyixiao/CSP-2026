#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long lint;

const int N=2e5+7,M=1e8+6;

int s[35];

struct Seg{
	int l,r;
	char c;
}a[N];

int n,len;
int d[M];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	
	for(int i=1;i<=26;i++) s[i]=i;
	
	int t;
	char c; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t>>c;
		a[i].c=c;
		
		d[len]+=s[c-'a'+1];
		a[i].l=len;
		len+=t;
		
		a[i].r=len;
		d[len]-=s[c-'a'+1];
	}
//	cout<<d[0]<<" ";
	for(int i=1;i<len;i++){
		d[i]+=d[i-1];
//		cout<<d[i]<<" ";
	}
//	puts("");
	
	t=0;
	for(int i=0;i<len/2;i++){
		t+=d[i]!=d[len-i-1];
//		printf("%d %d %d \n",t,d[i],d[len-i-1]);
	}
	cout<<t;
	
	
	return 0;
}