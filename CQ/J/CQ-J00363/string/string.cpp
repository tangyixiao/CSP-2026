#include<bits/stdc++.h>
using namespace std;
int n;
const int N=2e5+5;
struct node{
	char x;
	long long num;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num >>a[i].x ;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(a[l].num >a[r].num ){
			if(a[l].x ==a[r].x ){
				a[l].num -=a[r].num ;
				a[r].num =0;
				r--;
			}
			else{
				a[l].num -=a[r].num ;
				ans+=a[r].num ;
				a[r].num =0;
				r--;
			}
		}
		else{
			if(a[l].x ==a[r].x ){
				a[r].num -=a[l].num ;
				a[l].num =0;
				l++;
			}
			else{
				a[r].num -=a[l].num ;
				ans+=a[l].num ;
				a[l].num =0;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b*/
