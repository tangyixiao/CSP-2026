#include<bits/stdc++.h>
using namespace std;
vector<unsigned int> lop;
int near(unsigned int num){
	for(int i=1;;i++){
		if(pow(2,i)>num){
			return i-1;
		}
	}
}
bool cmp(unsigned x,unsigned int y){
	return near(x)>near(y);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	unsigned int n,m;
	cin>>n>>m;
//	cout<<n<<m;
	m--;
	for(unsigned int i=1;i<=n;i++){
		unsigned int tmp;
		cin>>tmp;
		lop.push_back(tmp);
//		cout<<"已读入"<<i<<"个数据"<<endl;
	}
	unsigned int largest=0;
//	cout<<"接收完毕"<<endl;
	sort(lop.begin(),lop.end());
//	for(auto ed:lop){
//		cout<<ed<<endl;
//	}
	for(unsigned int i=0;i<n-m;i++){
//		cout<<i<<endl;
		unsigned int ret=lop[i];
		unsigned int cnt=1;
		for(unsigned int j=i+1;cnt++<=m;j++){
			ret=ret & lop[j];
		}
//		cout<<lop[i]<<"至"<<lop[i+m]<<':'<<ret<<endl;
		largest=max(largest,ret);
	}
	cout<<largest;
}