#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastio() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define int long long
#define double long double
#define endl "\n"
#define v vector<int>
#define vb vector<bool>
#define vv vector<vector<int>>
#define pii pair<int,int>
#define vp vector<pii>
#define vs vector<string>
#define vd vector<double>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(s) s.begin(),s.end()
#define sz(x) (int)x.size()
#define f(i,n) for(int i = 0; i < n; ++i)
#define ff(i,n) for(int i = 1; i <= n; ++i)
#define frev(i,n) for(int i = n; i >= 0; --i)
#define rep(i, lo, hi, inc) for(int i=lo; i<=hi and inc>0 or i >= hi and inc<0; i+=inc)
#define input(x) for(auto &e:x)cin>>e
#define fa(x) for(auto it:x)
#define far(x) for(auto &it:x)
#define maxele(x) max_element(all(x))
#define minele(x) min_element(all(x))
#define sci(x) int x; cin>>x
#define scii(x,y) int x,y; cin>>x>>y
#define sciii(x,y,z) int x,y,z; cin>>x>>y>>z
#define print(x) fa(x) cout<<it<<" ";cout<<"\n"
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> ordered_set;
typedef pair<int, pii> pip;
int MOD = 1e9 + 7, intmax = LLONG_MAX, intmin = LLONG_MIN;

int ncr(int n, int r, int p = MOD) {
    if (r > n - r) r = n - r;
    int C[r + 1]; fill(C, C + r + 1, 0); C[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, r); j > 0; j--) C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}

int power(int x, int y, int p = MOD) {
    int res = 1; x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1; x = (x * x) % p;
    }
    return res;
}

int add(int x, int y, int mod = MOD) {return ( (x % mod) + (y % mod)) % mod;}
int subtract(int x, int y, int mod = MOD) {return ( (x % mod) - (y % mod) + mod) % mod;}
int multiply(int x, int y, int mod = MOD) {return ( (x % mod) * (y % mod)) % mod;}

void query(int a, int b) {
    cout << "? " << a << ' ' << b << endl;
    cout.flush();
}

void printpair(pii a) {
    cout << a.fi << " " << a.se << endl;
}

void printpip(pip it) {
    cout << it.fi << ' ';
    printpair(it.se);
}

bool canPartition(v& a, int sum) {
    // tells if there's a subset in a with sum = sum
    //works in O(n * sum) time
    int n = a.size();
    vb dp(sum + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = sum; j >= a[i]; --j) {
            if (dp[j - a[i]])
                dp[j] = true;
        }
    }
    return dp.back();
}

void solve() {

}

signed main() {
    fastio();
    int t = 1;
    cin >> t;
    ff(i, t) {
        // cout << "Case #" << i << ": \n";
        solve();
    }
    return 0;
}
