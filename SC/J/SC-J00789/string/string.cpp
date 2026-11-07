#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long l=0,ans=0;
	cin>>n;
	int a[200005];
	char c[200005];
	stack<int> a1;
	stack<char> c1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	const long long l2=(l+1)/2;
	long long sl=0;
	for(int i=1;i<=n;i++){
		long long sl1=sl;
		sl+=a[i];
		if(sl<=l2){
			if(sl==l2&&l%2==1) 
				a1.push(a[i]-1);
			else a1.push(a[i]);
			c1.push(c[i]);
		}
		else if(sl>l2&&sl1<l2){
			if(l%2==1) a1.push(l2-sl1-1);
			else a1.push(l2-sl1);
			c1.push(c[i]);
			int ai2=sl-l2;
			while(ai2&&!a1.empty()){
				if(a1.top()==0){
					a1.pop();
					c1.pop();
					continue;
				}
				if(ai2>a1.top()){
					ai2-=a1.top();
					if(c[i]!=c1.top()) ans+=a1.top();
					a1.pop();
					c1.pop(); 
				}
				if(ai2<=a1.top()){
					if(c[i]!=c1.top()) ans+=ai2;
					int t=a1.top();
					a1.pop();
					a1.push(t-ai2);
					ai2=0;
				}
			}
		}
		else{
			int ai2=a[i];
			while(ai2&&!a1.empty()){
				if(a1.top()==0){
					a1.pop();
					c1.pop();
					continue;
				}
				if(ai2>a1.top()){
					ai2-=a1.top();
					if(c[i]!=c1.top()) ans+=a1.top();
					a1.pop();
					c1.pop(); 
				}
				if(ai2<=a1.top()){
					if(c[i]!=c1.top()) ans+=ai2;
					int t=a1.top();
					a1.pop();
					a1.push(t-ai2);
					ai2=0;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}