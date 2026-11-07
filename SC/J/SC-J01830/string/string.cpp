#include <bits/stdc++.h>
using namespace std;
struct A{long long num;char c;};
A q[int(2e5+10)];
int n;
long long ans;
long long Abs(long long x){
	return max(x,-x);
}
bool bl[int(2e5+10)];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>q[i].num>>q[i].c;
	}
	for (int i=1;i<n;i++){
		if (q[i].c==q[i+1].c)
			q[i+1].num += q[i].num,bl[i]=1;
	}
	int i=1,j=n;
	while (i<=j){
		if (bl[i]){
			i++;
			continue;
		}
		if (bl[j]){
			j--;
			continue;
		}
		if (q[i].c==q[j].c){
			ans+=Abs(q[i].num-q[j].num),i++,j--;
//			cout<<ans<<"!\n";
		}
		else{
			if (q[i].num>q[j].num){
				ans+=q[j].num;
				q[i].num -= q[j].num;j--;
//				cout<<ans<<"!!\n";
			}
			else if (q[i].num==q[j].num){
				ans+=q[i].num;
				i++,j--;
//				cout<<ans<<"!!!\n";
			}
			else{
				ans+=q[i].num;
				q[j].num -= q[i].num;i++;
//				cout<<ans<<"!!!!\n";
			}
		}
	}
	cout<<ans;
	return 0;
} 