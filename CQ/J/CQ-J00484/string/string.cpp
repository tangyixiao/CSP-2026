#include<bits/stdc++.h>
using namespace std;
/*
从第一到n组字符开始，判断是否相等，用双指针 
*/
using ll=long long;
ll n,sum=0;
vector<int> a;
vector<char> b;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	a.resize(n+1);
	b.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int i=1,j=n;
	while(i<j){
		int mn=min(a[i],a[j]);
		a[i]-=mn;
		a[j]-=mn;
		if(b[i]!=b[j])
			sum+=mn;
		if(a[i]==0) i++;
		if(a[j]==0) j--;
	}
	cout<<sum;
	return 0;
}

