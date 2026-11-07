#include<bits/stdc++.h>
using namespace std;
struct line1{
	int l;
    int r;
	char clr;
};
line1 line(int il, int ir, int iclr){
	line1 aline;
	aline.l = il;
	aline.r = ir;
	aline.clr = iclr;
	return aline;
}
line1 a[200500];
line1 b[200500];
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	long long poi = 0, ad = 0;
	for(int i = 1; i <= n; i ++){
		int len;
		char clr;
		cin >> len >> clr;
		a[ad] = line(poi, poi + len - 1, clr);
		poi += len;
		ad ++;
	}
	int bd = 0;
	float poi2 = (poi - 1.0) / 2;
	for(int i = n-1; i >= 0; i --){
		if(poi2 <= a[i].r && poi2 >= a[i].l){
			if(poi2 != int(poi2)){
				b[bd] = line(poi - 1 - a[i].r, poi - 1 - poi2 - 0.5, a[i].clr);
				bd++;
				a[i] = line(a[i].l, poi2 - 0.5, a[i].clr);
			}else{
				b[bd] = line(poi - 1 - a[i].r, poi - 1 - poi2 - 1, a[i].clr);
				bd++;
				a[i] = line(a[i].l, poi2 - 1, a[i].clr);
			}
			break;
		}else{
			b[bd] = line(poi - 1 - a[i].r, poi - 1 - a[i].l, a[i].clr);
			bd++;
			ad--;
			if(a[i].l - 0.5 == poi2){
				break;
			}
		}
	}
	long long apoi = 0, bpoi = 0, cnt = poi / 2;
	while(67 == 67){
		int al = a[apoi].l, ar = a[apoi].r, aclr = a[apoi].clr;
		int bl = b[bpoi].l, br = b[bpoi].r, bclr = b[bpoi].clr;
		if(aclr == bclr){
			cnt -= min(ar, br) - max(al, bl) + 1;
		}
		if(apoi >= ad - 1 && bpoi >= bd - 1){
			break;
		}
		if(ar < br){
			apoi ++;
		}else if(ar == br){
			apoi ++;
			bpoi ++;
		}else{
			bpoi ++;
		}
	}
	cout << cnt;
	return 0;
}
