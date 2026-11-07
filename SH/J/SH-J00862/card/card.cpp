#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=300005;
int final[N];
int a[N];
stack<int> s,s2;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		for(int j=i;j<m;j++){
			s.push(a[j]);
			bool p=1;
			while(!s2.empty()){
				if(s2.top()==a[j]){
					p=0;
					break;
				}
				s2.pop();
			}
			if(p==1){
				s2=s;
			}
			else{
				s2.push(a[j]);
				s=s2;
			}
		}
		while(!s2.empty()){
			int t=s2.top()-1;
			final[t]++;
			s2.pop();
		}
	} 
	for(int i=0;i<n;i++){
		cout<<final[i]<<" ";
	}
	return 0;
}

