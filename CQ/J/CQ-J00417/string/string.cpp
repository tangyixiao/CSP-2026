#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],cnt,len;
char c[200005];
char l(int m){
	for(int i=1,cur=0;i<=n;i++){
		if(cur+a[i]<m)
			cur+=a[i];
		else if(cur+a[i]>=m)
			return c[i];
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int i=0;i<=len/2;i++){
		if(l(i)!=l(len-i-1))
			cnt++;
	}
	cout<<cnt;
	return 0;
}
