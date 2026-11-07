#include<bits/stdc++.h> 
using namespace std;
struct node{
	int ai;
	char ci;
}a[200005];
stack<char>q;
int maxn=0;
int main(){
	int n;
	cin>>n;
	long long ans=0;
	string s=" ";
	for(int i=1;i<=n;i++){
		cin>>a[i].ai>>a[i].ci;
		maxn+=a[i].ai;
		for(int j=1;j<=a[i].ai;j++){
			s+=a[i].ci;
		}
	}
	int maxm=maxn;
	for(int i=1;i<=maxn/2;i++){
		q.push(s[i]);
	}
	if(maxn%2==1)maxn=maxn/2+2;
	else maxn=maxn/2+1;
	for(int i=maxn;i<=maxm;i++){
		if(s[i]!=q.top()){
			ans++;
			q.pop();
		}
	}
	cout<<ans;
}