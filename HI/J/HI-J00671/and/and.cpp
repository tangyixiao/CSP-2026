#include <iostream>
using namespace std;
long long a[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n>>m;
	long long max=-10; 
	for(long long i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max;
	return 0;
}
