#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	long long x[200005];
	char y[200005];
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x[i] >> y[i];
	}
	long long a=1,b=n,ans=0;
	for(int i=1;i<=100000;i++){
		if(a>=b) break;
		if(y[a]==y[b]){
			if(x[a]>x[b]){
				x[a]-=x[b];
				b--;
			}
			else{
				x[b]-=x[a];
				a++;
			}
		}
		else{
			if(x[a]>x[b]){
				x[a]-=x[b];
				ans+=x[b];
				b--;
			}
			else{
				x[b]-=x[a];
				ans+=x[a];
				a++;
			}
		}
	}
	
	cout << ans;

	return 0;

}

