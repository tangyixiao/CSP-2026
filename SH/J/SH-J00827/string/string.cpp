#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int n;
char c[N];
int a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	long long cnt=0;
	int beg=1,end=n;
	while(beg<end){
		int x=min(a[beg],a[end]);
		a[beg]-=x;
		a[end]-=x;
		if(c[beg]!=c[end]){
			cnt+=x;
		}
		if(a[beg]==0) beg++;
		if(a[end]==0) end--;
	}
	cout<<cnt;
	return 0;
} 
