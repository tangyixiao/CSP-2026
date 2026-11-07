#include <bits/stdc++.h>
using namespace std;
char letter[100000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	long long sum = 0;
	long long cnt = 1;
	for(int i = 0;i < n;i++){
		int a; char c; cin>>a>>c;
		sum+=a;
		for(int i = cnt;i < cnt+a;i++){
			letter[i] = c;
		}
		cnt+=a;
	}
	long long hlf = sum/2;
	long long ans = 0;
	for(int i = 1;i <= hlf;i++){
		if(letter[i] != letter[sum-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}