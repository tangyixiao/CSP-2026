#include<bits/stdc++.h>
using namespace std;
struct node{
	vector<int> arr;
	int m;
	int num_and;
};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	vector<int> a;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	
	stack<node> s;
	int max_re=0;
	for(int i=0;i<n;i++){
		vector<int> temp(a);
		temp.erase(temp.begin()+i);
		s.push({temp,m-1,a[i]});
		while(!s.empty()){
			if(s.top().m==0){
				s.pop();
				max_re=max(max_re,s.top().num_and);
				continue;
			}
			
			node new_node;
			new_node.arr=s.top().arr;
			new_node.m=s.top().m-1;
			vector<int> temp_arr=s.top().arr;
			for(int i=0;i<new_node.arr.size();i++){
				new_node.num_and=s.top().num_and&temp_arr[i];
				new_node.arr.erase(new_node.arr.begin()+i);
				s.push(new_node);
				new_node.arr=temp_arr;
			}
			cout<<max_re<<endl;
		}
	}
	cout<<max_re;
	
	return 0;
} 
