#include <iostream>
#include <string>
using namespace std;
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out","w", stdout);
	int n, m;
	int a[n+5];
	cin >> n >> m;
	int num=0,ans=100000;
	for(int i = 0;i < n;i++){
		cin >> a[i];
		num=max(num,a[i]);
		ans=min(ans,a[i]);
	}
	int sum=0, z=100000;
	for(int i = 0;i < n;i++){
		if(a[i]!=num){
			if(a[i]!=ans){
				sum=max(sum,a[i]);
				z=min(z,a[i]);
			}
		}
	}
	int guo=0;
	for(int i = 0;i < n;i++){
		if(a[i]!=num){
			if(a[i]!=ans){
				if(a[i]!=sum){
					if(a[i]!=z){
						guo=max(guo,a[i]);
					}
				}
			}
		}
	}
	cout << guo;
	return 0;
}
