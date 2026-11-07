#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int a[200005];
int b[200005];
char c[200005];
 
/*
ll ch1[135];//×óÊ£Óà 
ll ch2[135];//youbian 
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll l=0,r=0,ans=0;
	char ch=0;
	for(int i=1;i<=(n+1)/2;i++){
		if(i!=(n+1)/2){
			l+=a[i],r+=a[n-i+1];
			if(i==1)
				if(c[i]!=c[n-i+1]){
					ll x=min(l,r);
					ll y=max(l,r);
					ans+=y-x;
					if(l<r)ch2[c[n-i+1]]+=r-l;
					else if(l>r)ch1[c[i]]+=l-r;
					l-=x,r-=x;
					
				}
			else{
				for(int j='a';j<='z';j++){
					if(ch1[j]<=0||ch2[j]<=0)continue;
					ll x=min(l,r);
					ll y=max(l,r);
					ll cx=ch1[j];
					ll cy=ch2[j];
					ll mc=min(cx,cy);
					if(c[i]==c[n-i+1])l-=min(a[i],a[i+n-1]);
					
				}
			}
		}
	}
	return 0;
} */
stack<ll> q1;
stack<ll> q2;
stack<char> ch1;
stack<char> ch2;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll ans=0;
	for(int i=(n+1)/2;i>=1;i--){
		q1.push(a[i]);
		q2.push(a[n-i+1]);
		ch1.push(c[i]);
		ch2.push(c[n-i+1]);
	}
	while(!(q1.empty()||q2.empty())){
	    ll n1=q1.top(),n2=q2.top();
	    char c1=ch1.top(),c2=ch2.top();
	    cout<<n1<<' '<<c1<<' '<<n2<<' '<<c2<<' '<<ans<<' '<<q1.size()<<' '<<q2.size()<<'\n';
	    ll mn;
	    
	    if(c1==c2){
	    	mn=min(n1,n2);
	    	if(n1==n2){
	    		q1.pop();
	    		ch1.pop();
	    		q2.pop();
	    		ch2.pop();
	    		continue;
			}
	    	if(mn==n1){
	    		q1.pop();
	    		ch1.pop();
	    		n2=n2-n1;
	    		q2.pop();
	    		q2.push(n2);
			}else if(mn==n2){
				q2.pop();
	    		ch2.pop();
	    		n1=n1-n2;
	    		q1.pop();
	    		q1.push(n1);
			}
		}else{
			mn=min(n1,n2);
			if(n1==n2){
	    		q1.pop();
	    		ch1.pop();
	    		q2.pop();
	    		ch2.pop();
	    		ans+=mn;
	    		continue;
			}
			if(mn==n1){
	    		q1.pop();
	    		ch1.pop();
	    		n2=n2-n1;
	    		q2.pop();
	    		q2.push(n2);
			}else if(mn==n2){
				q2.pop();
	    		ch2.pop();
	    		n1=n1-n2;
	    		q1.pop();
	    		q1.push(n1);
			}
			ans+=mn;
		}
	}
	while(q1.size()>2){ans+=q1.top();
		q1.pop();
	}
	while(q2.size()>2){ans+=q2.top();
		q2.pop();
	}
	cout<<ans;
}

