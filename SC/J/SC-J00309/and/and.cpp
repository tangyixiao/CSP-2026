#include<bits/stdc++.h>
using namespace std;
struct number{
	int sm = 0;
	int num;
};

bool comp(number sm1, number sm2){
	if(sm1.sm != sm2.sm){
		return sm1.sm < sm2.sm;
	}else{
		return sm2.num < sm2.num;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector<number> v;
	for(int i = 0; i < n; i++){
		int sm = 0,num;
		cin >> num;
		int tnum = num;
		while(num != 1){
			int te = num % 2;
			sm += te;
			num /= 2;
		}
		number nu;
		nu.num = tnum;
		nu.sm = sm + 1;
		v.push_back(nu);
	}
	sort(v.begin(),v.end(),comp);
	int a = v[v.size()-1].num,b = v[v.size()-2].num;
	int cont;
	cont = 12 and 15;
	cout << 12 and 15;
	return 0;
} 