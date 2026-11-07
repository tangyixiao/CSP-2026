#include<bits/stdc++.h>
using namespace std;
long long n;
long long loo;
struct F{
	long long t;
	char c; 
}f[2000007],k[2000007];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long cy=0;
	string sum="";
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> f[i].t >> f[i].c;
		for(int j=1;j<=f[i].t;j++)sum+=f[i].c;
	}
	for(int i=0;i<sum.size()/2;i++){
		int j=sum.size()-i-1;
		if(sum[i]!=sum[j])cy++;
	}
	cout << cy;
	return 0;  
} 
