#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1000000000;
const int MOD = MM + 7;
const int MAX = 510000;
#define rep(i, n) for(ll i=0; i<n; i++)
#define Rep(i, j, n) for(ll i=j; i<n; i++)
#define all(vec) vec.begin(), vec.end()
template<class T> inline bool chmin(T& a, T b) {if(a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if(a < b) {a = b; return true;} return false;}
const ll INF = 1LL << 60;

ll change_base(ll num, ll base) {
    ll dig = 1;
    ll ret = 0;
    while(num > 0) {
        ret += num % base * dig;
        num /= base;
        dig *= 10;
    }
    return ret;
}


int main() {
    int ans = 11;
    while(1) {
        string ten = to_string(ans);
        string rten = ten;
        reverse(all(rten));
        string bin = to_string(change_base(ans, 2));
        string rbin = bin;
        reverse(all(rbin));
        string oct = to_string(change_base(ans, 8));
        string roct = oct;
        reverse(all(roct));
        if(ten == rten && bin == rbin && oct == roct) {
            cout << ans << endl;
            return 0;
        }
        ans += 2;
    }
}