#include<bits/stdc++.h>
using namespace std;
int n,t;
long long sum;
struct Node{
	long long x;
	char c;
}a[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
		for(int j=t;j<t+a[i].x;j++){
			s+=a[i].c;
		}
		t=a[i].x;
	}
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			sum++;
		}
		l++,r--;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
