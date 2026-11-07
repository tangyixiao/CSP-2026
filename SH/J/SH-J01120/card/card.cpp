#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	long long a[1000005];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a + 1 , a + n + 1);
	long long ans = 0;
	if(a[1] == a[n]){
		cout << 0 << " " << 0 << " " << 0;
	}
	fclose(stdin);
	fclose(stdout);
    return 0;	
}
