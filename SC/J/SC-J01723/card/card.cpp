#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <stack>
#include <vector>
using namespace std;
int n,m,a[500005],ans[300005];
bool v[300005];

int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
//	cout<<n<<m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int>s;
		for(int i=1;i<=m;i++){
			v[i]=0;
		}
		while(!s.empty()){
			s.pop();
		}
		for(int j=i;j<=n;j++){
			if(!v[j]){
				s.push(a[j]);
				v[j]=1;
			}else{
				while(s.top()!=j){
					v[s.top()]=0;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
	}
	return 0;
}//Shy__666