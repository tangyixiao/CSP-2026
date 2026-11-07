#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	int o=a;
	queue<unsigned long long>n;
	queue<char>m;
	unsigned long long x=0,y=0;
	for(int i=0;i<a;i++){
		unsigned long long q;
		char w;
		cin>>q>>w;
		x+=q;
		if(m.front()==w){
			q+=n.front();
			n.pop();
			n.push(q);
			o--;}
		else{
			m.push(w);
			n.push(q);
		}}
//	while(!n.empty()){
//		cout<<n.front()<<" "<<m.front()<<endl;
//		n.pop();m.pop();}
	stack<unsigned long long>u;
	stack<char>p;
	unsigned long long g=0;
	while(y<x/2){
		y+=n.front();
		if(y<=x/2){
			u.push(n.front());
			p.push(m.front());
			n.pop();
			m.pop();}
		else{
			if(x%2!=0){
			n.front()-=1;
			x=x/2*2;
			y-=1;}
			u.push(y-x/2);
			p.push(m.front());
			n.front()-=y-x/2;
			if(n.front()<=0){
				n.pop();
				m.pop();}}}
	if(x%2!=0){
		n.front()-=1;
		if(n.front()<=0){
				n.pop();
				m.pop();}
	}
	g=x/2;
//	while(!n.empty()){
//		cout<<n.front()<<" "<<m.front()<<endl;
//		n.pop();m.pop();}
//	cout<<endl;
//	while(!u.empty()){
//		cout<<u.top()<<" "<<p.top()<<endl;
//		u.pop();p.pop();
//	}
//cout<<g<<endl;
	while(!n.empty()){
		if(m.front()==p.top()){
			g-=min(n.front(),u.top());
			//cout<<"-"<<g<<" ";
			}
		n.front()-=min(n.front(),u.top());
		u.top()-=min(n.front(),u.top());
		if(u.top()==0){
			u.pop();
			p.pop();}
		if(n.front()==0){
			n.pop();
			m.pop();}}
	//Trick||Treat!
	cout<<g;
	return 0;}
