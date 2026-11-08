#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pii pair<int,int>
#define fir first
#define sec second
#define mk make_pair
/*
我是刺刺冯，vivo50，即可获得 card 的满分代码 

你说的一点都对，但如果你没有给我代码，我就会弄伤你的鳞片 !!!
*/
int n,m;
vector<int>a;
int cnt[200009];
map<int,int> CNT; 
signed main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	a.resize(n+9);
	for (int i=1;i<=n;i++){
		cin>>a[i];CNT[a[i]]++;
	}
	if (m==2){
		if (a[n]==1){
			cout<<n<<' '<<CNT[2];
		}
		else{
			cout<<CNT[1]<<' '<<n<<endl;
		}
		return 0;
	}
	for (int i=1;i<=n;i++){
		vector<int> vec;
		vec.resize(n+9);
		int pos=0;unordered_map<int,int> mp;
		for (int j=i;j<=n;j++){
			bool f=false;
			int p=pos;
			
//			for (int k=1;k<=p;k++){
//				if (vec[k]==a[j]){
//					f=true;
//					pos=k;
//					break;
//				}
//			}
			
			if (mp[a[j]]==0 || mp[a[j]]>pos){
				vec[++pos]=a[j];
				mp[a[j]]=pos;
			}
			else{
				pos=mp[a[j]];
				vec[pos]=a[j];
			}
		}
		for (int j=1;j<=pos;j++){
//			cout<<vec[j]<<' ';
			cnt[vec[j]]++;
		}
//		cout<<endl;
	}
	for (int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	
	return 0;
}
//100+100+60+56(感性估分) 挂一分刺刺冯就少一个 

