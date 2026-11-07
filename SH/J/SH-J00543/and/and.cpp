#include <bits/stdc++.h>
using namespace std;
const int MaxN = 2e5+100;
int n,m;
int a[MaxN];
int ans=0;
bool check(long long mask){
	long long cnt = 0;
//	printf("mask=%d\n",mask); 
	for(int i = 1; i <= n; i++){
//		printf("a[i]=%d,mask=%d,a[i]&mask=%d\n",a[i],mask,a[i]&mask);
		if( (a[i]&mask) == mask){
			cnt++;
		}
		if(cnt>=m)return true;
	}
	if(cnt>=m)return true;
	return false;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	printf("%d\n\n",(1<<20));
	cin>>n>>m;
	for(int i = 1; i <= n; i++)	cin>>a[i];
//	sort(a+1,a+n+1);
	for(long long mask = (1<<20)-1; mask >= 1; mask--){
		if(check(mask)){
			cout << mask << '\n'; 
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}

/*

4 2
31
17
13
18

3 2
13 
18
4

3 2
17
9
4
*/ 
