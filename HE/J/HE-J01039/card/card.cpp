#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> cards;
	vector<long long> num(m+1,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		cards.push_back(x);
	}
	int f=0;
	while(f<n){
		vector<int> a(m+1,0);
		stack<int> s;
		for(int i=f;i<n;i++){
			if(a[cards[i]]==0){
				a[cards[i]]=1;
				s.push(cards[i]);
				num[cards[i]]++;
			}
			else{
				while(s.top()!=cards[i]){
					num[s.top()]--;
					a[s.top()]=0;
					s.pop();
				}
			}
		}
		f++;
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
