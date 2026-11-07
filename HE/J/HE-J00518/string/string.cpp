#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
long long l, ans;
struct node{
	long long num;
	char abc;
}str[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>str[i].num>>str[i].abc;
	}
	int i=1, j=n;
	while(i<j) {
		long long a=min(str[i].num, str[j].num);
		if(str[i].abc!=str[j].abc) {
			ans+=a;
		}
		str[i].num-=a;
		str[j].num-=a;
		if(str[i].num==0) 
			i++;
		if(str[j].num==0)
			j--;
	}
	cout<<ans;
	return 0;
}

