#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5,mod=1e9+7;
char s[N];
int n,a[N],cnt;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	int x=1,y=n,a1=0,a2=a[y];
	while(x<y){
		if(s[x]!=s[y]){
			if(a[x]-a1>a2){
				cnt+=a2;
				a1+=a2;
				y--;
				a2=a[y];
			}
			else if(a[x]-a1==a2){
				cnt+=a2;
				a1=0;
				x++;
				y--;
				a2=a[y];
			}
			else{
				cnt+=a[x]-a1;
				a2-=a1;
				a1=0;
				x++;
			}	
		}
		else{
			if(a[x]-a1>a2){
				a1+=a2;
				y--;
				a2=a[y];
			}
			else if(a[x]-a1==a2){
				a1=0;
				x++;
				y--;
				a2=a[y];
			}
			else{
				a2-=a1;
				a1=0;
				x++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
