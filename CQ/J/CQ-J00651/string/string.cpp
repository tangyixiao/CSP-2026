#include<bits/stdc++.h>
using namespace std;
long long n;
long long num[200050];
char ch[200050];
long long sum[200050];
long long ans;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i = 1;i <= n;i++){
		cin>>num[i]>>ch[i];
	}
	for (long long i = n;i >= 1;i--){
		sum[i] = sum[i+1]+num[i];
	}
	long long lenl = 0,lenr = 0;
	long long pos = n;
	for (long long i = 1;i <= n;i++){
		lenl += num[i];
		while (sum[pos] <= lenl){
			if (ch[i] != ch[pos]){
				ans += sum[pos]-lenr;
			}
			lenr = sum[pos];
			pos--;
		}
		if (lenr < lenl){
			if (ch[i] != ch[pos]){
				ans += lenl-lenr;
			}
			lenr = lenl;
		}
	}
	cout<<ans/2;
	return 0;
}
/*

*/
