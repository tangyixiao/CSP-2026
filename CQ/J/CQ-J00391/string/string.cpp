#include <bits/stdc++.h>
using namespace std;
struct Node {
	long long val;//本段长度 当前位置 
	char ch;//当前字母 
};
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	vector<Node> a(n);
	long long sum=0;//总长度 
	for (int i=0;i<n;i++) {
		cin >> a[i].val >> a[i].ch;
		sum+=a[i].val;
	}
	long long mid=sum/2;
	vector<Node> pos1,pos2;
	//储存数组
	long long all=0;
	for (int i=0;i<n;i++) {
		pos1.push_back({all,a[i].ch});
		long long cur=a[i].val;
		all+=cur;
		if (all>=mid) {
			pos1.push_back({mid,a[i].ch});
			break;
		}
	}
	all=0;
	for (int i=n-1;i>=0;i--) {
		pos2.push_back({all,a[i].ch});
		long long cur=a[i].val;
		all+=cur;
		if (all>=mid) {
			pos2.push_back({mid,a[i].ch});
			break;
		}
	}
	int l=0,r=0;
	long long pos=0,ans=0;
	while (l<pos1.size()-1&&r<pos2.size()-1) {
	    long long cur,sl=0,sr=0;
	    //当前个数 
	    if (pos1[l+1].val<pos2[r+1].val) {
	    	sl++;
	    	cur=pos1[l+1].val;
		} else if (pos1[l+1].val>pos2[r+1].val){
			sr++;
			cur=pos2[r+1].val;
		} else {
			if (l+2==pos1.size()) {
				sr++;
				cur=pos2[r+1].val;
			} else {
				sl++;
				cur=pos1[l+1].val;
			}
		}
		if (pos1[l].ch!=pos2[r].ch) {
			ans+=cur-pos;//cur比pos小 
		}
		pos=cur;
		l+=sl;
		r+=sr;
	}
	cout << ans << endl;
	return 0;
}


