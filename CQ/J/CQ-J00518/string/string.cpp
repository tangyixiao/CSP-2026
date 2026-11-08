#include <bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long num;
	char c;
};
node a[200010];
stack<node> s;
queue<node> q;
int num=0,jsq=0;
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	node t;
	for(int i=1;i<=n;i++){
		cin>>t.num>>t.c;
		a[i]=t;
		num+=t.num;
	}for(int i=1;i<=n;i++){
		if(jsq+a[i].num<=num/2){
			s.push(a[i]);
		}else{
			if(jsq<num/2){
				s.push({num/2-jsq,a[i].c});
				q.push({a[i].num-(num/2-jsq)-int((num%2==1))});				
			}else{
				q.push(a[i]);
			}
		}
		jsq+=a[i].num; 
	}
	while((!q.empty())&&(!s.empty())){ 
		node tl=s.top();
		node tr=q.front();
		if(!(q.front().c<='z')||!(q.front().c>='a')){
			q.pop();
			continue;
		} 
		//cout<<endl<<s.top().c<<' '<<q.front().c<<endl;
		if(tl.c==tr.c){
			if(tl.num>tr.num){
				tl.num-=tr.num;
				s.pop(); 
				s.push(tl);
				q.pop();
				//cout<<"g1"<<' '; 
			}else{
				if(tl.c<tr.c){
					s.pop();
					q.front().num-=tl.num;
				//	cout<<"g2"<<' ';
				}else{
					s.pop();
					q.pop();
			//		cout<<"g3"<<' '; 
				} 
			}
		}else{
			if(tl.num>tr.num){
				tl.num-=tr.num;
				s.pop(); 
				s.push(tl);
				q.pop();
				ans+=tr.num;
				//cout<<"e1"<<' '<<endl<<q.front().c<<' '<<s.top().c<<endl;
			}else{
				if(tl.num<tr.num){
					s.pop();
					q.front().num-=tl.num;
					ans+=tl.num;
				//	cout<<"e2"<<' ';
				}else{
					s.pop();
					q.pop(); 
					ans+=tl.num;
			//		cout<<"e3"<<' '; 
				} 
			}
		} 
	}
	cout<<ans;
	return 0;	
} 
