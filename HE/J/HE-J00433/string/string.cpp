#include <iostream>
#define MAXN 200090
using namespace std;
struct Chr{
	char c;
	int a;
	long long begin;
	long long end;
}str[MAXN];
int n;
long long ans,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> str[i].a >> str[i].c;
		str[i].begin=cnt;
		str[i].end=cnt+str[i].a-1;
		cnt=str[i].end+1;
	}
	int l=0,r=n-1;
	long long frt=0,bck=str[n-1].end;
	while(frt<bck){
		long long change=min(str[l].end-frt+1,bck-str[r].begin+1);
		if(str[l].c!=str[r].c) ans+=change;
		bck-=change;
		frt+=change;
		if(frt>str[l].end) l++;
		if(bck<str[r].begin) r--;
	}
	cout << ans;
	return 0;
}
