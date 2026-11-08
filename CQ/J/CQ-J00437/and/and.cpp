#include<bits/stdc++.h>
using namespace std;
long long a[2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin >> n >> m;
	
	for (int i=1;i<=n;i++){
		cin >> a[i];
	} 
	if (m==1){
		sort(a+1,a+n+1);
		cout << a[n];
	}
	else if (m==2){
		long long sum=0;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				sum=max(sum,(a[i]&a[j]));
			}
		}
		cout << sum;
	}
	else if(m=n-1){
		long long sum=0;
		long long num=a[1];
	    for (int i=1;i<=n;i++){
			    for (int j=1;j<=n;j++){
			    	if (j!=i)
				        num=(num&a[i]);
			    }
			    sum=max(num,sum);
		}
		cout << sum;
		
	}
	else {
	    long long sum=a[1];
		for (int i=2;i<=n;i++){
		    sum=(sum&a[i]);
		}
		cout << sum;
	}
	
}
