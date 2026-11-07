#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans,sum;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	stack<char> s;
	queue<char> q;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=a[i];j++){
			q.push(c[i]);
	    	s.push(c[i]);
		}
	}
	for(int i=1;i<=sum/2;i++){
		if(q.front()==s.top()){
			q.pop();
			s.pop();
		}else{
			ans++;
			q.pop();
			s.pop();
		}
	}
	cout<<ans;
	return 0;
}
