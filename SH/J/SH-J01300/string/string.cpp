# include <iostream>
# include <cstring>
# define ull unsigned long long
# define MAXN 200010
using namespace std;
int n;
ull cnt,tmp;
ull ans;
ull a[MAXN];
string c[MAXN];
string s;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(cnt = 1; cnt <= n; cnt++) cin>>a[cnt]>>c[cnt];
	cnt--;
	int i = 1, j = n;
	while(cnt&&(i < j)){
		if(c[i] == c[j]){
			if(a[i] >= a[j]){
				a[i] -= a[j];
				a[j] = 0;
				if(a[i] == 0) cnt--,i++;
				cnt--,j--;
			}
			else{
				a[j] -= a[i];
				a[i] = 0;
				cnt--,i++;
			}
		}
		else{
			if(a[i] >= a[j]){
				ans += a[j];
				a[i] -= a[j];
				a[j] = 0;
				if(a[i] == 0) cnt--,i++;
				cnt--,j--;
			}
			else{
				ans += a[i];
				a[j] -= a[i];
				a[i] = 0;
				cnt--,i++;
			}
		}
		if(cnt == 1){
			cout<<ans;
			return 0;
		}
	}
	cout<<ans;
	return 0;
} 
