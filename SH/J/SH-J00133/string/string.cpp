#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
long long a[200005];
char c[200005]{1};
struct node{
	long long a;
	char c;
}s[200005];
stack<node>b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,j=0,k;
	cin>>n;
	long long sum=0,cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		if(c[i-1]==c[i])s[j].a+=a[i];
		else{
			s[++j].c=c[i];
			s[j].a+=a[i];
		}
	}
	int m=sum;
	if(j==1){
		cout<<0;
		return 0;
	}
	if(j==2){
		cout<<max(s[1].a,s[2].a);
		return 0;
	}
	node t;
	for(int i=1;i<=j;i++){
		if(m-s[i].a>sum/2){
			m-=s[i].a;
			b.push(s[i]);
		}
		else{
			k=i;
			if(sum%2)s[i].a--;
			t=s[i];
			t.a=m-sum/2-1;
			s[i].a=s[i].a-t.a;
			b.push(t);
			break;
		}
	}
	for(int i=k;i<=j;i++){
		while(s[i].a){
			if(b.empty()){
				break;
			}
			if(s[i].a>b.top().a){
				s[i].a-=b.top().a;
				if(s[i].c!=b.top().c)
					cnt+=b.top().a;
				b.pop();
			}
			else{
				b.top().a-=s[i].a;
				if(s[i].c!=b.top().c)
					cnt+=s[i].a;
				s[i].a=0;
			}
		}
	}
	cout<<cnt;
	return 0;
}

