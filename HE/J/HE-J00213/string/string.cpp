#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
struct node{
	int w;
	char c;
}a[N];
long long ans;
int n;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].w >> a[i].c; 
	}
	for(int i = 1,j = n;i < j;){
		if(a[i].c != a[j].c){
			ans += min(a[i].w,a[j].w);
		}
		if(a[i].w > a[j].w){
			a[i].w -= a[j].w;
			j--;
		}
		else{
			a[j].w -= a[i].w;
			i++;
		}
	}
	cout << ans << endl; 
	return 0;
} 
