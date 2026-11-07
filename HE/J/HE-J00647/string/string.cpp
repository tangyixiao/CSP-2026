#include <bits/stdc++.h>
using namespace std;
long long n;
char x;
struct node{
	long long f;
	char z;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int num,i=1;i<=n;i++){
		cin>>num>>x;
		a[i].f=num;
		a[i].z=x;
	}
	long long h=1,w=n,ans=0;
	for(int i=1;i<=(n+1)/2;i++){
		if(a[h].f>a[w].f){
			if(a[h].z!=a[w].z){
				ans+=a[w].f;
				a[h].f-=a[w].f;
				w--;
			}
		}
		else if(a[h].f<a[w].f){
			if(a[h].z!=a[w].z){
				ans+=a[h].f;
				a[w].f-=a[h].f;
				h++;
			}
		}
		else if(a[h].f==a[w].f){
			if(a[h].z!=a[w].z){
				ans+=a[w].f;
				h++;
				w--;
			}
		}
	}
	cout<<ans;
	return 0;
} 

