#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
char c[N];
int a[N],n;
int sum=0;
void Solve(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i]>>c[i];
    }
    int l=1,r=n;
    while(l<=r){
    	//cerr<<"l=>"<<l<<"  r=>"<<r<<'\n';
    	if(c[l]==c[r]){
    		if(a[l]>a[r]){
				sum+=a[l]-a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
				if(c[r]==c[r-1]){
					sum-=a[l]-a[r+1];
				}
			}
			else if(a[l]<a[r]){
				sum+=a[r]-a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
				if(c[l]==c[l-1]){
					sum-=a[r]-a[l-1];
				}
			}
			else if(a[l]==a[r]){
				l++;
				r--;
			}
		}
		else if(c[l]!=c[r]){
			if(a[l]>a[r]){
				sum+=a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
				if(c[r]==c[r-1]){
					sum-=a[l]-a[r+1];
				}
			}
			else if(a[l]<a[r]){
				sum+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
				if(c[l]==c[l-1]){
					sum-=a[r]-a[l-1];
				}
			}
			else if(a[l]==a[r]){
				sum+=a[l];
				l++;
				r--;
			}
		}
	}
	cout<<sum;
    return ;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
signed main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int t=1;
    //cin>>t;
    while(t--) Solve();
    return 0;
}//