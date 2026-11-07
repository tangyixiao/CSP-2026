#include<bits/stdc++.h>
using namespace std;
stack<long long> a;
long long n,m,num[500005]={0},h=0,b[300005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		b[num[i]]=1;
	}
	for(int i=1+h;i<=n;i++){
		h++;
		for(int j=i;j<=n;j++){
			if(a.empty()){
				a.push(num[j]);
				continue;
			}
			if(a.top()!=num[j]){
				a.push(num[j]);
			}
		}
		while(!a.empty()){
			b[a.top()]++;
			a.pop();
		}
	}
	for(int i=1;i<=300004;i++){
		if(b[i]!=0){
			cout<<b[i]-1<<" ";
		}
	}
	return 0;
}
