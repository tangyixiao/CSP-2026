#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	string b;
};
int main(){
	vector<int>v;
	for(int i=1;i<=10;i++)v.push_back(i);
	for(int i=1;i<5;i++){
		v.erase(v.begin()+3);
		for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
		cout<<endl<<i<<endl;
	}
	return 0;
} 


