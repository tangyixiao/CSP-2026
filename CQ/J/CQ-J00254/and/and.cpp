#include <bits/stdc++.h>
using namespace std;
int ana(int x,int y){
	int m=0,n=1;
	while (x>0 || y>0)
	{
		if (x%2==1 && y%2==1){
			m+=n;
		}
		x/=2;
		y/=2;
		n*= 2;
	}
	return m;
}
int main()
{
	freopen("r","and.in",stdin);
	freopen("w","and.out",stdout);
	int n,maxn=-1,m,a[200002];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (a[i]>maxn)maxn=a[i];
	}
	sort (a+1,a+n+1);
	if (m==1){
	    cout << maxn;
	    return 0;
    } 
	if (m==2){
		cout << max(ana(a[n],a[n-1]),ana(a[n-1],a[n-2]));
		return 0;
	}
	if (m==n){
		int aa=a[1];
		for (int i=1;i<=n-1;i++) 
		{
			aa=ana(aa,a[i+1]);
		}
		cout << aa;
		return 0;
	}
	if (n<=20){
		int sss=0;
		for (int i=1;i<=n-m+1;i++){
		    int ss=a[i];
			for (int j=i+1;j<=i+m-1;j++){
				ss=ana(ss,a[j]);
			}
			if (ss>sss)sss=ss;
		}
		cout << sss;
		return 0;
	}
	return 0;
}
