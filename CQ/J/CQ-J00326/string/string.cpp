#include <bits/stdc++.h>
using namespace std;
struct k{
	char p;
	long long num;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<k>a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].p;
	}int l=1,r=n;
	long long ans=0;
	while(l<=r&&r>0&&l<n+1){
		if(a[l].p!=a[r].p){
			if(a[l].num>a[r].num){
				ans+=a[r].num;
				a[l].num-=a[r].num;
				r--;
			}else if(a[l].num<a[r].num){
				ans+=a[l].num;
				a[r].num-=a[l].num;
				l++;
			}else{
				ans+=a[l].num;
				l++;
				r--;
			}
		}else{
			if(a[l].num>a[r].num){
				a[l].num-=a[r].num;
				r--;
			}else if(a[l].num<a[r].num){
				a[r].num-=a[l].num;
				l++;
			}else{
				l++;
				r--;
			}
		}
	}cout<<ans;
	return 0;
}
