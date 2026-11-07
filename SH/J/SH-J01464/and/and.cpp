#include<bits/stdc++.h>
using namespace std;
string s;
int n,m,a[200005],ans;
int to(int x){
	stack<int> st;
	while(x!=1){
		st.push(x%2);
		x/=2;
	}
	st.push(1);
	int ans=0;
	while(!st.empty()){
		ans=ans*10+st.top();
		st.pop();
	}
	return ans;
}
bool cmp(int x,int y){
	return x>y;
}
int ten(int x){
	
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		//a[i]=to(a[i]);
	}
	sort(a+1,a+n+1,cmp);
	ans=a[1];
	for(int i=2;i<=m;i++){
		//cout<<a[i]<<endl;
		ans=ans&a[i];
	}
	cout<<ans<<endl;
}
/*4 2
3 15 12 12
*/
