#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200100] = {},cs = 0;
	char s[200100] = {};
	cin >> n;
	long long num = n;
	for(int i = 1;i<=n;i++){
		cin >> a[i] >> s[i];
	}
	for(int i = 1;i<num;i++){
		long long cnt = a[i];
		while(cnt>0){
			if(s[i]!=s[num]){
				if(cnt>=a[num]){
					cs+=a[num];
					cnt-=a[num];
					a[num] = 0;
					num--;
				}
				else{
					cs+=cnt;
					a[num]-=cnt;
					cnt = 0;
				}
			}
			else{
				if(cnt>=a[num]){
					cnt-=a[num];
					a[num] = 0;
					num--;
				}
				else{
					a[num]-=cnt;
					cnt = 0;
				}
			}
		}
	}
	cout << cs;
	return 0;
}
