#include<bits/stdc++.h>
using namespace std;
	stack<int> q1,q2;
	stack<char> s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long z=0;
	int n;
	cin>>n;
	int a;
	char c;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		z+=a;
		q1.push(a);
		s1.push(c);
	}
	long long lz=0;
	int qld=0;
	if(z%2==1){
		qld=-1;
	}
	z=z/2;
	int lq;
	char ls;
	while(!s1.empty()){
		ls=s1.top();
		lq=q1.top();
		s1.pop();
		q1.pop();
		lz=lz+lq;
		if(lz<z){
			s2.push(ls);
			q2.push(lq);
		}else{
			s2.push(ls);
			q2.push(lq-lz+z);
			if(lz!=z){
				s1.push(ls);
				q1.push(lz-z+qld);
			}
			break;
		}
	}
	z=0;
	while(!s1.empty()&&!s2.empty()){
		a=q1.top();
		c=s1.top();
		ls=s2.top();
		lq=q2.top();
		q1.pop();
		s1.pop();
		s2.pop();
		q2.pop();
		if(c!=ls){
			z+=min(a,lq);
		}
		if(a==lq){
			continue;
		}else{
			if(a-lq>0){
				q1.push(a-lq);
				s1.push(c);
			}else{
				q2.push(lq-a);
				s2.push(ls);
			}
		}
		
	}
	cout<<z;	
	return 0;
} 