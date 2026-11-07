//9:19
#include<bits/stdc++.h>
using namespace std;

#define int long long
const int N=200010;
int n,cnt=0,ans=0;
int a[N];
char s[N];

signed main(){
	freopen("string.in","r",stdin); 
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		cnt+=a[i];
	}
	int at=1,at1=n;
	while(1){
		if(cnt%2==1&&at==at1) break;
		else if(cnt%2==0&&at-at1==1) break;
		if(s[at]==s[at1]){
			if(a[at]>a[at1]){
				a[at]-=a[at1];
				at1--;
			}
			else if(a[at]==a[at1]){
				a[at]-=a[at1];
				a[at1]-=a[at];
				at++;
				at1--;
			}
			else{
				a[at1]-=a[at];
				at++;
			}
		}
		else{
			if(a[at]>a[at1]){
				ans+=a[at1];
				a[at]-=a[at1];
				at1--;
			}
			else if(a[at]==a[at1]){
				ans+=a[at];
				a[at]-=a[at1];
				a[at1]-=a[at];
				at++;
				at1--;
			}
			else{
				ans+=a[at];
				a[at1]-=a[at];
				at++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
