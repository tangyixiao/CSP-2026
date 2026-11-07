#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5+17;
struct node{
	long long num;
	char c;
}a[MAXN];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
	int l = 1,r = n;
	long long sum = 0;
	while(l <= r){
		int lim = min(a[r].num,a[l].num);
		if(a[r].c == a[l].c){
			a[r].num -= lim,a[l].num -= lim;
			if(a[r].num <= 0)r--;
			else if(a[l].num <= 0)l++; 
		}
		else{
			a[r].num -= lim,a[l].num -= lim;
			sum += lim;
			if(a[r].num <= 0)r--;
			else if(a[l].num <= 0)l++; 
		}
	}
	cout<<sum;
	return 0;
}