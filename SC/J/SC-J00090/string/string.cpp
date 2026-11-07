#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
struct Node{
	long long s;
	char c;
}a[200005];
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].c;
		for(long long j=1;j<=a[i].s;j++){
			b+=a[i].c;
		}
	}
	long long l=0,r=b.length()-1;
	while(l<=r){
		if(b[l]!=b[r]){
			cnt++;
			b[r]=b[l];
		}
		l++,r--;
	}
	cout<<cnt;
	return 0;
}