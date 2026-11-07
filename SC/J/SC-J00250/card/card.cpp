#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],a1[500005],ls;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	deque<int>q;
	stack<int>s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a1[i];
	}
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
		if(a[a1[i]]==0){
			q.push_back(a1[i]);
			a[a1[i]]++;
		}else{
			for(int j=0;j<q.size();j++){
				ls=q.front();
				q.pop_front();
				if(ls!=a1[i]){
					s.push(ls);
				}
			}
			q.push_back(a1[i]);
			for(int j=0;j<s.size();j++){
				ls=s.top();
				a[ls]--;
				s.pop();
				q.push_front(ls);
			}
		}
		}
		for(int i=1;i<=m;i++){
			if(a[m])cout<<a[m]<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 