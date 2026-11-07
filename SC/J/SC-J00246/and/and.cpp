#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	vector<int> a;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end(),greater<int>());
	if(m==0){
		cout<<0;
		return 0;
	}
	int answer=a[0];
	for(int i=1;i<m;i++){
		answer=answer&a[i];
	}
	cout<<answer;
	return 0;
}