#include <bits/stdc++.h>
#define int long long
using namespace std;
namespace qwq{
    static string s;
    static int n;
    //static vector<int> a;
    //static vector<string> c;
    static bool is_huiwen(const string &str) noexcept{
        /*string str2 = str;
        reverse(str2.begin(),str2.end());
        return str == str2;*/
        #ifdef QwQ_DEBUG
        cout << "[dbg] str=" << str <<endl;
        #endif // QwQ_DEBUG
        for(int i = str.size() - 1;i >= str.size() / 2 - 1;i--){
            if(str[i] != str[str.size() - i - 1]) {
                #ifdef QwQ_DEBUG
                cout << "[dbg] str[" << i << "]("<< str[i] << ") != str[" << str.size()-i-1 << "](" << str[str.size()-i-1] << "), false" << endl;
                #endif // QwQ_DEBUG
                return false;
            }else{
                #ifdef QwQ_DEBUG
                cout << "[dbg] str[" << i << "]("<< str[i] << ") == str[" << str.size()-i-1 << "](" << str[str.size()-i-1] << ")" << endl;
                #endif // QwQ_DEBUG
            }
        }
        return true;
    }
    static bool check(const int x) noexcept{
        string s2 = s;
        for(int i = s2.size();i > s2.size() - x;i--){
            /*
            #ifdef QwQ_DEBUG
            cout << "[dbg] s2[" << i-1 << "] =" << s2[s2.size()-i] << " ";
            #endif // QwQ_DEBUG
            */
            s2[i-1] = s2[s2.size()-i];
            /*
            #ifdef QwQ_DEBUG
            cout << "s2 = " << s2 << endl;
            #endif // QwQ_DEBUG
            */
            if(is_huiwen(s2)) return true;
        }
        /*
        #ifdef QwQ_DEBUG
        cout << "[dbg] s2=" << s2 << " , x=" << x << endl;
        #endif // QwQ_DEBUG
        */
        return is_huiwen(s2);
    }
    static void main() noexcept{
        cin >> n;
        int rig = 0;
        //a.resize(n+1);
        //c.resize(n+1);
        for(int i = 1;i <= n;i++){
            //cin >> a[i] >> c[i];
            int ai;
            char ci;
            cin >> ai >> ci;
            rig += ai;
            for(int i = 1;i <= ai;i++){
                s += ci;
            }
        }
        if(is_huiwen(s)){
            cout << 0 << endl;
            return;
        }
        int l = 1, r = rig;
        while(l < r){
            int mid = (l + r) / 2;
            if(check(mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        cout << l << '\n';
    }
}
signed main() noexcept{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    qwq::main();
    return 0;
}
/*
#include <bits/stdc++.h>
#define int long long
using namespace std;
namespace qwq{
    static string s;
    static int n;
    //static vector<int> a;
    //static vector<string> c;
    static bool is_huiwen(const string &str) noexcept{
        #ifdef QwQ_DEBUG
        cout << "[dbg] str=" << str <<endl;
        #endif // QwQ_DEBUG
        for(int i = str.size() - 1;i >= str.size() / 2 - 1;i--){
            if(str[i] != str[str.size() - i - 1]) {
                #ifdef QwQ_DEBUG
                cout << "[dbg] str[" << i << "]("<< str[i] << ") != str[" << str.size()-i-1 << "](" << str[str.size()-i-1] << "), false" << endl;
                #endif // QwQ_DEBUG
                return false;
            }else{
                #ifdef QwQ_DEBUG
                cout << "[dbg] str[" << i << "]("<< str[i] << ") == str[" << str.size()-i-1 << "](" << str[str.size()-i-1] << ")" << endl;
                #endif // QwQ_DEBUG
            }
        }
        return true;
    }
    static bool dfs(string st,int cnt) noexcept{
        if(st.size() == s.size()){
            return is_huiwen(st);
        }
        auto tmp = st;
        tmp += s[st.size()];
        int dfs1 = dfs(tmp,cnt);
        int dfs2 = 1e6;
        for(char ch = 'a';ch <= 'z';ch++){
            if(dfs(st + ch,cnt + 1)){
                dfs2 = min(dfs2,cnt);
            }
        }
        return min(dfs1,dfs2);
    }
    static bool check(const int x) noexcept{
        //string s2 = s;
        return dfs("",0);
    }
    static void main() noexcept{
        cin >> n;
        int rig = 0;
        //a.resize(n+1);
        //c.resize(n+1);
        for(int i = 1;i <= n;i++){
            //cin >> a[i] >> c[i];
            int ai;
            char ci;
            cin >> ai >> ci;
            rig += ai;
            for(int i = 1;i <= ai;i++){
                s += ci;
            }
        }
        if(is_huiwen(s)){
            cout << 0 << endl;
            return;
        }
        int l = 1, r = rig;
        while(l < r){
            int mid = (l + r) / 2;
            if(check(mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        cout << l << '\n';
    }
}
signed main() noexcept{
    //freopen("string.in","r",stdin);
    //freopen("string.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    qwq::main();
    return 0;
}
 */
