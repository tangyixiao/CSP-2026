#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	while(n--){
		int s;
		char d;
		cin>>s>>d;
		a.insert(a.end(),s,d);
	}
	int ans=0;
	int len=(int)a.size();
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-i-1])
			ans++;
	}
	cout<<ans;
	return 0;
}
