#include<bits/stdc++.h>
using namespace std;
long long ans=0;
struct block{
	long long len;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n,L=0;
	cin>>n;
	vector<block> a(n+1);
	for(long long i=1;i<=n;i++){
		int lon;
		cin>>lon>>a[i].c;
		a[i].len=lon;
		L+=lon;
	}
	long long mid;
	mid=L/2;
	vector<char> ch;
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i].len;j++){
			ch.push_back(a[i].c);
		}
	}
	for(long long i=1;i<=mid;i++){
		if(ch[L+1-i]!=ch[i]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

