#include<bits/stdc++.h>
using namespace std;
string s;
char c;
long long n,x;
struct P{
	long long num,ans;
	char ch;
}a[200005];
long long huiwen(){
	long long cnt=0,li=0,ri=n-1,l=1,r=a[n-1].num;
	while(li<ri || l<r){
		if(a[li].ans+l>(a[n-1].ans+a[n-1].num)/2) break;
		if(a[li].ch!=a[ri].ch){
			cnt++;
		}
		l++,r--;
		if(l>a[li].num){
			l=1;
			li++;
		}
		if(r<=0){
			ri--;
			r=a[ri].num;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>x>>c;
		a[i].num=x;
		a[i].ch=c;
		if(i==0) a[i].ans=0;
		else a[i].ans=a[i-1].ans+a[i-1].num;
	}
	cout<<huiwen();
	return 0;
}
