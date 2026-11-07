#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 2 * 1e5 + 5;

long long a[MAX];
char c[MAX];

long long n,ans = 0;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> n;
	for(int i = 1;i <= n;++i)	cin >> a[i] >> c[i];
	
	long long i = 1,j = n,i1 = 1,j1 = a[n];
	while(i < j){
		int l = min(a[i] - i1 + 1,j1);
		
		if(c[i] != c[j])	ans += l;
		i1 += l;j1 -= l;
		
		if(i1 == a[i] + 1){ ++i;i1 = 1; }
		if(j1 == 0){ --j;j1 = a[j]; }
	}
	
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}