#include <bits/stdc++.h>
using namespace std;
int a[200005],n,b=0,x=0;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)cin >> a[i] >> c[i];
    for(int i=2;i<=n;i++){
    	int x=c[1];
    	if(x!=c[i])b=1;
	}
	if(b==0){
		cout << 0;
		return 0;
	}
	else{
		for(int i=1;i<=n;i++){
			x+=a[i];
		}
		if(x%2!=0){
			cout << a[1];
		}
		else{
			cout <<x/2;
		}
	}
	return 0;
}

