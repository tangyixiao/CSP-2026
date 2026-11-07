#include<bits/stdc++.h>
using namespace std;
struct node{
	long long a;char b;//a´æ 
}v[200006];
stack<node>q1;stack<node>q2;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>v[i].a>>v[i].b;	
	}
	for(int i=1;i<=n;i++){
		q1.push({v[i].a,v[i].b});
	}for(int i=n;i>=1;i--){
		q2.push({v[i].a,v[i].b});
	}
	while(!q1.empty()&&!q2.empty()){
		node s1=q1.top(),s2=q2.top();
		q1.pop(),q2.pop();
		if(s1.a==s2.a&&s1.b==s2.b)continue;
		else if(s1.b==s2.b&&s1.a!=s2.a){
			node neww;
			neww.a=abs(s2.a-s1.a);
			neww.b=s1.b;
			if(s1.a>s2.a){
				q1.push(neww);
			}else{
				q2.push(neww); 
			}
		}
		else if(s1.a==s2.a&&s1.b!=s2.b){
			ans+=s1.a;
		}else if(s1.a>s2.a){
			node neww;
			neww.a=s1.a-s2.a;
			neww.b=s2.b;
			q1.push(neww);
			ans+=s1.a-s2.a;
		}else if(s1.a<s2.a){
			node neww;
			neww.a=s2.a-s1.a;
			neww.b=s1.b;
			q2.push(neww);
			ans+=s2.a-s1.a;
		}
	}
	cout<<ans/2;
	return 0;
} 
