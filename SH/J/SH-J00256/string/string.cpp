#include <bits/stdc++.h>
using namespace std;
struct Node{
    char c;
    int num;
};
Node nd[200005];
int check(Node &a,Node &b,int an,int bn){
    if(a.c == b.c) return min(an,bn);
    return 0;
}

int main(void){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long sum = 0;
    long long length = 0;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> nd[i].num >> nd[i].c;
        length += nd[i].num;
    }
    if(n == 1){
        cout << '0' << "\n";
        return 0;
    }
    int l = 0;
    int r = n-1;
    int lnum = nd[l].num;
    int rnum = nd[r].num;
    while(l<r){
        sum += check(nd[l],nd[r],lnum,rnum);
        if(lnum > rnum){
            lnum -= rnum;
            r--;
            rnum = nd[r].num;
        }
        else if(lnum < rnum){
            rnum -= lnum;
            l++;
            lnum = nd[l].num;
        }
        else{
            l++;
            r--;
            rnum = nd[r].num;
            lnum = nd[l].num;
        }
    }
    if(l > r)cout << ((length-2*sum)/2) << "\n";
//    else if(lnum == rnum)cout << ((length+lnum-2*sum)/2) << "\n";
    else{
		cout << ((length-min(lnum,rnum)-2*sum)/2) << "\n";
//        int mx = max(lnum,rnum);
//        cout << ((length-mx-2*sum)/2) << "\n";
    }
    return 0;
}
