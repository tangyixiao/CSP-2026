#include<bits/stdc++.h>

using namespace std;

int a[200010];

bool cmp(int x, int y){
	return x > y;
}

int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin>>n>>m;
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	
	sort(a+1, a+n+1, cmp);
	
	int ans = -1;
	for(int i=1; i+m<=n; i++){
		int t = a[i];
		for(int j=i+1; j<=i+m; j++){
			t = t & a[j];
		}
		
		ans = max(ans, t);
	}
	
	cout<<ans<<endl;

	
	
	return 0;
}

/*

//freopen

like prefix sum.
but cannot think of it.
no much time.

nooooooooo!

can get 272 most.
may be my last OI contest.

just kind of sad...
maybe not only kind of
EXTREMELY SAD>>>>>>>>>
cry loud...

*/
