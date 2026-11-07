#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int NM = 2e5;
int A[NM+4];
char C[NM+4];
ll ans;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i = 1;i <= n;i++) cin>>A[i]>>C[i];
	for(int i = 1,j = n-i+1;i < j;i++,j--){
		if(A[j] <= 0) j--;
		while(A[i] > A[j]){
			if(C[i] != C[j]) ans += A[j];
			A[i] -= A[j];
			j--;
		}
		if(i < j and C[i] != C[j]) ans += A[i];
		A[j] -= A[i];
		j++;
	}
	cout<<ans;
	return 0;
}
//abbbbbbbcc
//aabbbbccdda
//aaabbbbacc
//dddabbdade 