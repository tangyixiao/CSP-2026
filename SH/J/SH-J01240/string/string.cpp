#include <bits/stdc++.h>
using namespace std;
const int N=2e5+9;
long long n,cnt;
struct s {int x; char y;
};
s a[N];
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y;
		
	for(int i=1,j=n;i<=j;){
		if(a[i].y!=a[j].y){
			cnt+=min(a[i].x,a[j].x);
		}
		if(a[i].x<a[j].x){
			a[j].x-=a[i].x;
			i++;
		}
		else{
			a[i].x-=a[j].x;
			j--;
		}
	}
	
	cout<<cnt;
	return 0;
} 
