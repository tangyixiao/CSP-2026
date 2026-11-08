#include<bits/stdc++.h>
using namespace std;
char c[10010];
int a[10010];
int n;
int ans = 1;
int sum = 0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i = 1; i <= n;i++){
		int x;
		char s;
		cin >> x >> s;
		for(int j = ans; j <= ans+x-1;j++){
			c[j] = s;
		}
		ans = x+ans;
	}
	int mj = ans/2;
	int pd = 1;
	for(int i = 1; i <= mj;i++){
		for(int j = ans; j >= mj;j--){
			cout << c[i] << " " << c[j] << endl;
			if(c[i] == c[j]){
				pd = 1;
			}else pd =2;
			if(pd == 2){
				if(c[i] != c[j]){
					sum++;
				}
			}
		}
	}
	if(pd == 1) {
		cout << "0";
	}else cout << sum;
	return 0;
}

