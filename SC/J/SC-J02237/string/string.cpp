#include<bits/stdc++.h>
const int N=2e5+1;
using namespace std;
#define ll long long
bool bl(char b[N],char c[N]){
	for(int i = 1;i <= N;i++){
		if (b[i]!=c[i]) return 0;
	}
	return 1;
//	if(ab==bc) return 1;
//	else return 0;
}
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	int n;
	cin >> n;
	int a[N];
	char c[N];
	for (int i = 1;i <= n;i++){
		cin >> a[i] >> c[i];
	}
	char ab[N],bc[N];
	ll aas=0,bas=0;
	for (int i = 1;i <= N;i++){
		for(int j=0;j<a[i];j++){
			ab[aas++]=c[i];
		}
	}
	for (int i = N;i >= 1;i--){
		for(int j=0;j<a[i];j++){
			bc[bas++]=c[i];
		}
	}
	int cnt=0,i=0;
	while(bl(ab,bc))
	{ 
	    i++;
		if(ab[i]!=bc[i]){
		    cnt++;
		    ab[i]=bc[i];
		}
	}
	cout << cnt;
	return 0;
} 