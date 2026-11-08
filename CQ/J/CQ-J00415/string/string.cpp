#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e8+5;
ll n, i, j, cnt, ans;
char a[MAXN];
ll m[MAXN];
string A;
bool abc=false, abc1=false, abcd[MAXN];
void cx1(){
	for (i=1; i<=n/2; i++){
		if (m[i]!=m[n-i+1]){
			abc1=true;
			ans++;
		}
		if (a[i]!=a[n-i+1]){
			abc1=true;
			ans+=min(m[i], m[n-i+1]);
		}
	}
	if (abc1==false){
		cout<< 0;
	}
	else{
		
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>> n;
	for (i=1; i<=n; i++){
		cin>> m[i]>> a[i];
		if (m[i]>=MAXN || abc){
			if (!abc){
				abc=true;
			}
		}
		else{
			for (j=1; j<=m[i]; j++){
				A[cnt+j-1]=a[i];
			}
		}
		cnt+=m[i];
	}
	if (abc){
		cx1();
		cout<< ans;
		return 0;
	}
	for (i=0; i<cnt/2+1; i++){
		if (A[i]!=A[cnt-i-1]){
			ans++;
		}
	}
	cout<< ans<< '/n';
	return 0;
}
/*
2
2 a
3 a
*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
