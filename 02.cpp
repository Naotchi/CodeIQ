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

stack<int> st;
int ope[3];

void dfs(int num, int n) {
    if(n == 3) {
        int now = num / 1000;
        rep(i, 3) {
            if(ope[i] == 0) {
                now *= 10;
                now += to_string(num)[i+1] - '0';
            } else {
                st.push(now);
                st.push(ope[i]);
            }
        }
    }
    Rep(i, -4, 1) {
        ope[n] = i;
        dfs(n+1);
    }
}

int main() {

}