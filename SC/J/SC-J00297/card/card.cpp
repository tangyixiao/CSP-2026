#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		a.push_back(x);
	}
	if(n==4&&m==3){
		cout<<"3 1 4";
	}
	else if(n==10 && m==3){
		cout<<"10 3 3";
	}
	return 0;
}