#include <bits/stdc++.h>
using namespace std;
char aa[505];
int main(){
	freopen("r","string.in",stdin);
	freopen("w","string.out",stdout);
	int n;
	long long a[200005];
	bool s=1,sss=1;
	char c[200005];
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		if (i>1 && c[i]!=c[i-1])s=0;
		if (a[i]!=a[i-1] && i>1)sss=0;
	}
	if (s==1){
		cout << 0;
		return 0;
	}
	if (n<=1){
		cout << 0;
		return 0;
	}
	if (n==2){
		if (c[1]==c[2]){
		    cout << 0;
	    }
	    else{
	    	cout << min(a[1],a[2]);
		}
		return 0;
	}
	if (sss=1){
		int x=0;
		for (int i=1;i<=n/2;i++){
			if(c[i]!=c[n-i+1])x++;
		}
		cout << x*a[1];
		return 0;
	}
	int ss=1;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=a[i];j++){
			aa[ss]=c[i];
			ss++;
		}
	}
	int xx=0;
	for (int i=1;i<=(ss-1)/2;i++){
		if (aa[i]!=a[ss-i])xx++;
	}
	cout << xx;
	return 0; 
}
