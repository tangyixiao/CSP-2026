#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;

struct node{
	long long num;
	char c;	
};

int n;
vector<node>vec;
long long ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);	
	cin>>n;
	for(int i=1;i<=n;i++){
		long long linnum;
		char linc;
		cin>>linnum>>linc;
		if(vec.size()&&linc==vec[vec.size()-1].c)
				vec[vec.size()-1].num+=linnum;
		else{
			vec.push_back(node{linnum,linc});
		}
	}
	for(int i=0,j=vec.size()-1;i<=j;){
		if(!vec[i].num){
			i++;
			continue;
		}
		if(!vec[j].num){
			j--;
			continue;
		}
		long long lin=min(vec[i].num,vec[j].num);
		char na1=vec[i].c,na2=vec[j].c;
		if(i==j)break;
		if(na1!=na2){
			ans+=lin;
		}
		vec[i].num-=lin;
		vec[j].num-=lin;
	}
	cout<<ans;
	return 0;
} 
