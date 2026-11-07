#include<bits/stdc++.h>
using namespace std;
unsigned long long n,cnt;
struct f{
	unsigned long long num;
	string s;
}a[200001];
string s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].s;
		for(int i=0;i<=a[i].num;i++){
			s1+=a[i].s;
		}
	}
	for(int i=0;i<=s1.size();i++){
		if(s1[i]!=s1[s1.size()-i-1]) cnt++;
	}
	cout<<cnt;
	return 0;
}