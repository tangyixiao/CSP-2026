#include<bits/stdc++.h>
using namespace std;
long long n,ans;
char z;
int y;
struct ss{
	long long x;
	char s;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
    	cin>>a[i].x>>a[i].s;
    	if(i==1){
    		z=a[i].s;
    		y=1;
		}else if(y==1&&z!=a[i].s){
			y=0;
		}
	}
	if(y==1){
		cout<<0;
		return 0;
	}
	long long i=1,j=n;
	while(i!=j){
		if(a[i].s!=a[j].s){
			ans+=min(a[i].x,a[j].x);
			if(a[i].x>a[j].x){
				a[i].x-=a[j].x;
				j--;
			}else if(a[i].x<a[j].x){
				a[j].x-=a[i].x;
				i++;
			}else{
				i++;
				j--;
				if(i-j==1){
					break;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}