#include <bits/stdc++.h>
using namespace std;
long long n,a,cnt,res;
char c;
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	vector<char> q;
	for(int i=1; i<=n; i++){
		cin>>a>>c;
		cnt+=a;
		for(int j=1; j<=a; j++){
			q.push_back(c);
		}
	}
	for(int i=0; i<=(cnt-1)/2; i++){
		if(q[i]!=q[cnt-1-i]) res++;
	}
	cout<<res;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
} 
