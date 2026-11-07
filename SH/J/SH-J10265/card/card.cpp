#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],c[200005];
bool b[200005];
stack<int>s;
int main(){
 	freopen("card.in","r",stdin);
  	freopen("card.out","w",stdout);
    cin>>n>>m;
    for (int i=1;i<=n;i++){
    	cin>>a[i];
	}
	 for (int i=1;i<=n;i++){
	 	for (int j=i;j<=n;j++){
	 		if (b[a[j]]){
	 			while (s.top()!=a[j]){
	 				b[s.top()]=false;
	 				s.pop();
				 }
			 }else {
			 	s.push(a[j]);
			 	b[a[j]]=true;
			 }
		 }
		 while (!s.empty()){
		 	c[s.top()]++;
		 	s.pop();
		 }
		 for (int j=1;j<=m;j++){
		 	b[j]=false;
		 }
	 }
	 for (int i=1;i<=m;i++){
	 	cout<<c[i]<<" ";
	 }
}
