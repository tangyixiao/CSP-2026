#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5; 
long long n,ans;
int sum;
string aa;
struct mm{
	int a;
	char b;
}m[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i].a>>m[i].b;
		sum+=m[i].a;
	}
	if(n%2==0){
		for(int i=1,j=n;i<=n/2,j>=n/2+1;i++,j--){
			if(m[i].b!=m[j].b){
				ans+=min(m[i].a,m[j].a);
			}
		}
	}
	else if(n%2==1){
		for(int i=1,j=n;i<=n/2,j>=n/2+2;i++,j--){
			if(m[i].b!=m[j].b){
				ans+=min(m[i].a,m[j].a);
			}
		}
	}
	cout<<ans;
	return 0;
}
