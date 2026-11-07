#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 5e5+10;

int n,m,pt;
int a[N],t[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		t[a[i]]++;
	}
	
	for(int i = 1;i <= n;i++){
		t[i] += t[i-1];
	}
	
	for(int i = 2;i <= n;i++){
		if(a[i] == a[i-1]) pt = i;
	}
	for(int i = 1;i < a[pt];i++) cout << t[i] << ' ';
	for(int i = a[pt];i <= m;i++) cout << pt+i-a[pt] << ' ';
	return 0;
}

