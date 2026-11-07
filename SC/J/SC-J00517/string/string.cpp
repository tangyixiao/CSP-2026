#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],len,ans;
char c[200010];
stack<long long>a1,b1;
stack<char>a2,b2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	long long cnt=0;
	for(int i=1;i<=n;i++){
		if(cnt+a[i]<=len/2){
			a1.push(a[i]);
			a2.push(c[i]);
			cnt+=a[i];
		}else{
			a1.push(len/2-cnt);
			a2.push(c[i]);
			cnt=0;
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(cnt+a[i]<=len/2){
			b1.push(a[i]);
			b2.push(c[i]);
			cnt+=a[i];
		}else{
			b1.push(len/2-cnt);
			b2.push(c[i]);
			break;
		}
	}
	while(!a1.empty()&&!b1.empty()){
		if(a2.top()==b2.top()){
			if(a1.top()>b1.top()){
				long long t=a1.top()-b1.top();
				b1.pop(),a1.pop(),b2.pop();
				a1.push(t);
			}else if(a1.top()<b1.top()){
				long long t=b1.top()-a1.top();
				a1.pop(),b1.pop(),a2.pop();
				b1.push(t);
			}else if(a1.top()==b1.top()){
				a1.pop(),a2.pop(),b1.pop(),b2.pop();
			}
		}else{
			ans+=min(a1.top(),b1.top());
			if(a1.top()>b1.top()){
				long long t=a1.top()-b1.top();
				b1.pop(),a1.pop(),b2.pop();
				a1.push(t);
			}else if(a1.top()<b1.top()){
				long long t=b1.top()-a1.top();
				a1.pop(),b1.pop(),a2.pop();
				b1.push(t);
			}else if(a1.top()==b1.top()){
				a1.pop(),a2.pop(),b1.pop(),b2.pop();
			}
		}
	}
	cout<<ans;
	return 0;
}