#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,a[N],ans;
char c[N];
signed  main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int k1=1,k2=n;
	while(k1<k2){
		if(c[k1]!=c[k2]){
			ans+=min(a[k1],a[k2]);
			if(a[k1]>a[k2]){
				a[k1]-=a[k2];
				k2--;
			}else if(a[k1]<a[k2]){
				a[k2]-=a[k1];
				k1++;
			}else{
				k1++,k2--;
			}
		}else{
			if(a[k1]>a[k2]){
				a[k1]-=a[k2];
				k2--;
			}else if(a[k1]<a[k2]){
				a[k2]-=a[k1];
				k1++;
			}else{
				k1++,k2--;
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
   3
1  2 a
2  2 b
3  1 c
b£»2 4 5
 
*/
