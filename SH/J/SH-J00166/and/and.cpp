#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
ll n,m,a[N],m_eq_1_max,m_eq_n_ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(m==1&&a[i]>m_eq_1_max){
			m_eq_1_max=a[i];
		}
		if(m==n){
			if(i==1){
				m_eq_n_ans=a[i];
			}else{
				m_eq_n_ans&=a[i];
			}
		}
	}
	if(m==1){
		cout<<m_eq_1_max;
		return 0;
	}
	if(m==n){
		cout<<m_eq_n_ans;
		return 0;
	}
	return 0;
}
