#include<bits/stdc++.h>
#define ll long long
#define pr pair<int,int>
#define _1 first
#define _2 second
using namespace std;
const int N=2e5+5;
int n;
ll a[N];
char c[N];
ll cz;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int j=n;
	cz=0;
	for(int i=1;i<=n;i++){
		ll sm=0;
		while(j>i&&sm<a[i]){
			sm+=a[j];
			if(c[i]!=c[j])cz+=a[j];
			a[j]=0;
			j--;
		}
		if(sm>a[i]){
			j++;
			if(c[i]!=c[j]){
				cz-=(sm-a[i]);
				a[j]+=(sm-a[i]);
			}else if(c[i]==c[j]){
				a[j]+=(sm-a[i]);
			} 
		}
	}
	cout<<cz;
	return 0;
} 
/*
3
2 a
2 b
1 c
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/
