#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
long long all;
long long a[200005];
char c[200005];
int abx(int a){
	if(a>=0) return a;
	return -a;
}
int hw(string t){
	int cnt=0;
	for(int i=0;i<t.length()/2;i++){
		if(t[i]!=t[t.length()-i-1]) cnt++;
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x>>c[i];
		a[i]=a[i-1]+x;
		all+=x;
	}
	int nowf=0,nowb=n;
	for(int i=1;i<=all/2;i++){
		if(i>a[nowf]) nowf++;
		if(all-i+1==a[nowb-1]) nowb--;
		if(c[nowf]!=c[nowb]) cnt++;
	} 
	cout<<cnt;
	return 0;
} 
