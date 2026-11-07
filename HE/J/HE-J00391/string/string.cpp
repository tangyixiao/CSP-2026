#include<bits/stdc++.h>
using namespace std;
const int maxn=2*100000+10;
int n,a[maxn],ans=INT_MAX;
char c[maxn];
string s;
int Is_huiwen(string x){
	string y;
	int cnt=0;
	for(int i=0;i<x.size();i++){
		if(x[i]!=x[x.size()-i-1]){
			y[x.size()-i-1]=x[i];
			y[i]=x[i];
			cnt++;
		}
		else y+=x[i];
	}
	ans=min(ans,cnt);
	return Is_huiwen(y);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		while(a[i]--) s+=c[i];
	}
	Is_huiwen(s);
	cout<<ans;
	return 0;
} 
