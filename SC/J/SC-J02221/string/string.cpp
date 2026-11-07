#include <bits/stdc++.h>
using namespace std;
string s;
long long n,x;
long long a[200010];
char c[200010];
long long hw(string s){
	long long sum;
	bool f=1;
	sum=0;
	for(long long i=0,j=s.size()-1; ;i++,j--){
		if(i>j){
			break;
		}
		if(s[i]!=s[j]){
			f=0;
			sum++;
		}
	}
	if(f==0){
		return sum;
	} else{
		return 0;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		for(long long j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	cout<<hw(s);
	return 0;
} 