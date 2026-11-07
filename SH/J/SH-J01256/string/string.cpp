#include<bits/stdc++.h>
#define int long long
using namespace std;
int x[200009];
char c[200009];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;cin>>n;
	int top=1,tail=n;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>c[i];
	for(int i=1;i<n;i++)
		if(c[i]==c[i+1]){
			x[i+1]+=x[i];
			x[i]=0;
		}
	while(top<tail){
		if(x[top]==0){
			top++;
			continue;
		}
		if(x[tail]==0){
			tail--;
			continue;
		}
		if(c[top]==c[tail]){
			if(x[top]>x[tail])
				x[top]-=x[tail--];
			else if(x[top]==x[tail])
				top++,tail--;
			else if(x[top]<x[tail])
				x[tail]-=x[top++];
		}else{
			if(x[top]>x[tail]){
				ans+=x[tail];
				x[top]-=x[tail--];
			}else if(x[top]==x[tail]){
				ans+=x[top];
				top++,tail--;
			}else if(x[top]<x[tail]){
				ans+=x[top];
				x[tail]-=x[top++];
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
