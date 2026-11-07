#include <bits/stdc++.h>
using namespace std;
long long a[200005],s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout << a[n];
		return 0;
	}else if(m==2){
		for(int i=n;i>=1;i--){
			for(int j=n-1;j>=1;j--){
				s=max(s,a[i]&a[j]);
			}
		}
		cout << s;
	}else if(m==n-1){
		s=a[n];
		for(int i=n-1;i>=2;i--){
			s=s&a[i];	
		}
		cout << s;
	}else{
		s=a[n];
		for(int i=n-1;i>n-m;i--){
			s=s&a[i];
		}
		cout << s << endl;
	} 
	return 0;
} 