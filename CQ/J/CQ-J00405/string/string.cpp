// char de scanf dao di shi bu shi %s aaaaaaaaaaa 
// 666,shen mi fen lei tao lun
#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long long l;
	char c;
	long long s,e;
}chu[200100];
long long L;
long long mid;
long long ans;
int en;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	scanf("%d",&n); 
	for(int i = 1;i <= n;i++){
		scanf("%lld",&chu[i].l);
		cin >> chu[i].c;
		chu[i].s = L + 1;
		L += chu[i].l;
		chu[i].e = L;
	}
	if(L % 2 == 0) mid = L / 2;
	else mid = (L - 1) / 2;
	for(int i = 1;i <= n;i++){
		if(chu[i].s <= mid && mid <= chu[i].e){
			en = i;
			break;
		}
	}
	int last;
	if(L % 2 == 0){
		if(chu[en].s <= mid && mid < chu[en].e){
			last = en;
		}
		else last = en + 1;
	}
	else{
		for(int i = 1;i <= n;i++){
			if(chu[i].s <= mid + 2 && mid + 2 <= chu[i].e){
				last = i;
				break;
			}
		}
	}
//	cout << last << " " << en << "\n";
	for(int i = en;i >= 1;i--){
		long long se = L - chu[i].s + 1;
		long long ss = L - chu[i].e + 1;
		if(i == en){
			ss = L - mid + 1;
		}
//		cout << se << " " << ss << "\n" << chu[last].s << " " << chu[last].e << "\n";
		if(chu[last].s <= ss && ss <= chu[last].e && chu[last].s <= se && se <= chu[last].e){
			if(chu[last].c != chu[i].c) ans += se - ss + 1;
//			cout << "1111";
			continue;
		}
		if(ss == chu[last + 1].s) last++;
		else{
			if(chu[last].c != chu[i].c) ans += chu[last].e - ss + 1;
			last++;
		}
		for(int j = last;j <= n;j++){
			if(chu[j].s <= se && se <= chu[j].e){
				if(chu[j].c != chu[i].c){
					ans += se - chu[j].s + 1;
				}
				last = j;
				break;
			}
			else{
				if(chu[j].c != chu[i].c){
					ans += chu[j].l;
				}
			}
		}
	}
	printf("%lld\n",ans);
	return 0; 
}
