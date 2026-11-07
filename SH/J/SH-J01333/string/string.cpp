#include<bits/stdc++.h>

using namespace std;

int N;
int a[200005];
char c[200005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> N;
	for(int i=1;i<=N;i++){
		cin >> a[i] >> c[i];
	}
	long long ans=0;
	int o=1;
	int p=N;
	while(true){
		if(o>=p){
			break;
		}
		if(a[o] == 0){
			o++;
		}
		if(a[p] == 0){
			p--;
		}
		if(c[o] == c[p]){
			if(a[o] > a[p]){
				a[o] -= a[p];
				p--;
			}else if(a[o] < a[p]){
				a[p] -= a[o];
				o++;
			}else{
				o++;
				p--; 
			}
		}else{
			if(a[o] > a[p]){
				ans+=a[p];
				a[o] -= a[p];
				p--;
			}else if(a[o] < a[p]){
				ans += a[o];
				a[p] -= a[o];
				o++;
			}else{
				ans += a[o];
				o++;
				p--; 
			}
		}
	}
	cout << ans; 
}
