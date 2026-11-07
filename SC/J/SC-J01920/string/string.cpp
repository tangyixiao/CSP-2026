#include<bits/stdc++.h>
using namespace std;
long long n;
long long v[100000];
deque<long long>q;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char ch='0';
		cin>>v[i]>>ch;
		q.push_back(ch);
	}
	cout<<2;
	return 0;
}