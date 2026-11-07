#include <iostream>
#include <cmath>
using namespace std;

struct node{
	long long x;
	char c;
}num[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> num[i].x >> num[i].c;
	}
	int r=1,l=n;
	long long ans=0;
	while (r<=l){
		if (num[r].c!=num[l].c){
			if (num[r].x!=num[l].x) ans+=abs(num[r].x-num[l].x);
			else ans+=num[l].x;
		}
		if (num[r].x==num[l].x){
			r++;
			l--;
		}
		else if (num[r].x>num[l].x){
			num[r].x-=num[l].x;
			l--;
		}
		else{
			num[l].x-=num[r].x;
			r++;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
