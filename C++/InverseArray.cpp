﻿#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>
#include <limits.h>
#include <iterator>
#include <complex>
#include <assert.h>
#include <thread>

#ifdef _MSC_VER
#  include <intrin.h>
#  define __builtin_popcount __popcnt
#endif

using namespace std;

//                                          //AUTHOR: Hugo Garcia

//======================================================================================================================

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define ROF(i, a, b) for(ll i=ll(a); i>=ll(b); i--)
#define pb push_back
#define mp make_pair
#define lld I64d
#define all(a) (a).begin(), (a).end()
#define ifile(a) freopen((a), "r", stdin)
#define ofile(a) freopen((a), "w", stdout)
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.1415926535897932384626433832795
#define mem(x, val) memset((x), (val), sizeof(x))
#define sz(x) (ll)(x).size()
#define endl '\n'
#define clockon int t = 1; while (t--) { clock_t z = clock();
#define clockoff debug("Elapsed Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC); }
#define oo 2000000000000000000LL
#define EPS 1e-6

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

#define MOD 1000000007
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

vector<vector<int>> performOps(vector<vector<int>> A) {
	vector<vector<int>> B;
	B.resize(A.size());
	for (int i = 0; i < A.size(); i++) {
		B[i].resize(A[i].size());
		for (int j = 0; j < A.size(); j++) {
			B[i][A[i].size() - 1 - j] = A[i][j];
		}
	}
	return B;
}

int main() {
	vector<vector<int>>A = { {1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12} };
	vector <vector<int>> B = performOps(A);
	for (int i = 0; i < B.size(); i++) {
		for (int j = 0; j < B[i].size(); j++) {
			cout << B[i][j] << " ";
		}
	}
	return 0;

}


//======================================================================================================================