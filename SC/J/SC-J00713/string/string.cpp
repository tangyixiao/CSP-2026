#include<iostream>
using namespace std;
const int N = 2e5 + 5;
int a[N];
char ch[N];
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i] >> ch[i];
	for(int i = 1, j = n; i < j;){
		if(ch[i] == ch[j]){
			if(a[i] == a[j])
				i++, j--;
			else if(a[i] > a[j]){
				a[i] -= a[j];
				j--;
			}
			else{
				a[j] -= a[i];
				i++;
			}
		}
		else{
			if(a[i] == a[j]){
				ans += a[i];
				i++, j--;
			}
			else if(a[i] > a[j]){
				a[i] -= a[j];
				ans += a[j];
				j--;
			}
			else{
				a[j] -= a[i];
				ans += a[i];
				i++;
			}
		}
	}
	cout << ans;
}