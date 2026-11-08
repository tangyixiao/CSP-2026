#include <iostream>
#include <stack>
using namespace std;
const int N=5e5+10,M=3e5+10;
int n,m;
int a[N];
int ans[M],cnt[M];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int flag1=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flag1=0;
	}
	if(n<=6000){
		stack<int> st;
		for(int stt=1;stt<=n;stt++){
			for(int i=stt;i<=n;i++){
				if(cnt[a[i]]==0){
					st.push(a[i]);
					cnt[a[i]]++;
				}else{
					while(st.top()!=a[i]){
						cnt[st.top()]--;
						st.pop();
					}
				}
			}
			for(int i=1;i<=m;i++){
				if(cnt[i]>0) ans[i]++;
				cnt[i]=0;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}else if(flag1){
		for(int i=1;i<=n;i++){
			ans[a[i]]=max(ans[a[i]],i);
		} 
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}else if(m<=2){
		int sum1=0,sum2=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1) sum1++;
			else sum2++;
		}
		if(a[n]==1){
			cout<<n<<" "<<sum2;
		}else{
			cout<<sum1<<" "<<n;
		}
	}else{
		for(int i=1;i<=m;i++){
			cout<<i<<" ";
		}
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

10 5
1 1 1 2 3 3 4 4 5 5

Trick||Treat!
*/
