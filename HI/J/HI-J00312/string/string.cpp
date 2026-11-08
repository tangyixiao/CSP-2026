#include<bits/stdc++.h>
using namespace std;
string str[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	int n;
	long long cnt=0;
		int x;
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>x>>c;
		for(int j=1;j<=x;j++){
			str+=c;
		}
	}
	for(long long i=0;i<(str.size()/2);i++){
		if(str[i]!=str[str.size()-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
