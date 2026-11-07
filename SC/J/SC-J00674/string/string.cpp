#include<bits/stdc++.h>
using namespace std;
long long n,sum,ans;
struct str{
	int b;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].b;
		sum+=a[i].b;
		cin>>a[i].c;
	}
	int d1=1,d2=n;
	while(sum>0){
		if(a[d1].c==a[d2].c){
			if(a[d1].b==a[d2].b){
				sum-=a[d1].b*2;
				d1++,d2--;
			}else if(a[d1].b>a[d2].b){
				sum-=a[d2].b*2;
				a[d1].b-=a[d2].b;
				d2--;
			}else{
				sum-=a[d1].b*2;
				a[d2].b-=a[d1].b;
				d1++;
			}
		}else{
			if(a[d1].b==a[d2].b){
				ans+=a[d1].b;
				sum-=a[d1].b*2;
				d1++,d2--;
			}else if(a[d1].b>a[d2].b){
				ans+=a[d2].b;
				sum-=a[d2].b*2;
				a[d1].b-=a[d2].b;
				d2--;
			}else{
				ans+=a[d1].b;
				sum-=a[d1].b*2;
				a[d2].b-=a[d1].b;
				d1++;
			}
		}
	}
	cout<<ans;
	return 0;
}