#include<bits/stdc++.h>
using namespace std;
long long ans;
string L="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++) L+=c;
	}
	for(long long i=0;i<=(L.size()-1)/2;i++){
		long long x=L.size()-1-i;
		if(L[i]!=L[x]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

