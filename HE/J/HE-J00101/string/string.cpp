#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
struct node{
	long long num;
	char c;
}a[N];
string s;
long long l,r,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1; i <= n; i++){
		cin>>a[i].num>>a[i].c;
		for(long long j=1;j<=a[i].num;j++){
			s+=a[i].c;
		}
	}
	l=0,r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++,r--;
	}
	cout <<ans;
	return 0;
} 
