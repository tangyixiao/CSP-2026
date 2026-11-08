#include<bits/stdc++.h>
using namespace std;
string s;
int n;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=1;i<=n;++i){
		int l;
		char c;
		cin>>l>>c;
		while(l--)s+=c;
	}
	int z=s.size();
	int zz=z/2;
	for(int i=1;i<z;++i){
		if(s[i]!=s[z-i-1]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
/*
sum=8
aabbcaaa
aaacbbaa

*/
