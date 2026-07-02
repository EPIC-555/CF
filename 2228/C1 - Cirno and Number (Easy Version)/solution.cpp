#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int D[2];
 
int numDigits(ll n) {
    if (n == 0) return 1;
    int c = 0; while (n) { c++; n /= 10; } return c;
}
 
vector<int> getDigits(ll n, int len) {
    vector<int> v(len);
    for (int i = len-1; i >= 0; i--) { v[i] = n % 10; n /= 10; }
    return v;
}
 
ll buildPfx(vector<int>& v, int end) {
    ll r = 0; for (int i = 0; i < end; i++) r = r*10 + v[i]; return r;
}
 
vector<int> avail(int pos, int len) {
    if (pos == 0 && len > 1) {
        vector<int> r;
        if (D[0] != 0) r.push_back(D[0]);
        r.push_back(D[1]);
        return r;
    }
    return {D[0], D[1]};
}
 
ll floorValid(ll a, int len) {
    int la = numDigits(a);
    if (len > la) return -1;
    if (len < la) {
        ll r = 0; for (int i = 0; i < len; i++) r = r*10 + D[1]; return r;
    }
    auto ad = getDigits(a, len);
    vector<int> chosen;
    ll result = -1;
    for (int i = 0; i < len; i++) {
        auto av = avail(i, len);
        int bs = -1; bool eq = false;
        for (int d : av) {
            if (d == ad[i]) eq = true;
            else if (d < ad[i] && d > bs) bs = d;
        }
        if (bs != -1) {
            ll cand = buildPfx(chosen, chosen.size()) * 10 + bs;
            for (int j = i+1; j < len; j++) cand = cand*10 + D[1];
            result = max(result, cand);
        }
        if (eq) { chosen.push_back(ad[i]); }
        else {
            for (int j = (int)chosen.size()-1; j >= 0; j--) {
                int b2 = -1;
                for (int d : avail(j, len)) if (d < chosen[j] && d > b2) b2 = d;
                if (b2 != -1) {
                    ll cand = buildPfx(chosen, j) * 10 + b2;
                    for (int jj = j+1; jj < len; jj++) cand = cand*10 + D[1];
                    result = max(result, cand);
                    break;
                }
            }
            return result;
        }
    }
    result = max(result, buildPfx(chosen, chosen.size()));
    return result;
}
 
ll ceilValid(ll a, int len) {
    int la = numDigits(a);
    if (len < la) return -1;
    if (len > la) {
        int first = (D[0] != 0) ? D[0] : D[1];
        ll r = first; for (int i = 1; i < len; i++) r = r*10 + D[0]; return r;
    }
    auto ad = getDigits(a, len);
    vector<int> chosen;
    ll result = -1;
    auto upd = [&](ll c) { if (result == -1 || c < result) result = c; };
    for (int i = 0; i < len; i++) {
        auto av = avail(i, len);
        int bs = -1; bool eq = false;
        for (int d : av) {
            if (d == ad[i]) eq = true;
            else if (d > ad[i] && (bs == -1 || d < bs)) bs = d;
        }
        if (bs != -1) {
            ll cand = buildPfx(chosen, chosen.size()) * 10 + bs;
            for (int j = i+1; j < len; j++) cand = cand*10 + D[0];
            upd(cand);
        }
        if (eq) { chosen.push_back(ad[i]); }
        else {
            for (int j = (int)chosen.size()-1; j >= 0; j--) {
                int b2 = -1;
                for (int d : avail(j, len)) if (d > chosen[j] && (b2 == -1 || d < b2)) b2 = d;
                if (b2 != -1) {
                    ll cand = buildPfx(chosen, j) * 10 + b2;
                    for (int jj = j+1; jj < len; jj++) cand = cand*10 + D[0];
                    upd(cand);
                    break;
                }
            }
            return result;
        }
    }
    upd(buildPfx(chosen, chosen.size()));
    return result;
}
 
void solve() {
    ll a; int n;
    cin >> a >> n >> D[0] >> D[1];
    ll ans = LLONG_MAX;
    for (int len = 1; len <= 18; len++) {
        ll f = floorValid(a, len);
        if (f != -1) ans = min(ans, a - f);
        ll c = ceilValid(a, len);
        if (c != -1) ans = min(ans, c - a);
    }
    cout << ans << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
}