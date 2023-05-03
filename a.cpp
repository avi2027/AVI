#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <cassert>
#include <cctype>
#include <climits>

using namespace std;

#define NMAX 10000
#define MMAX 10000
#define INF 0x3f3f3f3f
#define PI 3.1415926535897932384626433832795
#define EPS 1e-9
#define MOD 1000000007

typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int,int> Pii;
typedef vector<int> Vi;
typedef vector<string> Vs;
typedef vector<Pii> VPii;
typedef vector<Vi> VVi;


template <class T> T gcd(T a, T b) { return (b) == 0? (a) : gcd((b), ((a) % (b))); }
template <class T> T lcm(T a, T b) { return ((a) / gcd((a), (b)) * (b)); }

template <class T> void chmin(T& a, T b) { a = (a > b)? b : a; }
template <class T> void chmax(T& a, T b) { a = (a < b)? b : a; }
int in() { int x; scanf("%d", &x); return x;
}

template <class T> void write(T x) { printf("%d", x); }
template <class T> void write(T x, int y) { printf("%d %d", x, y); }
template <class T> void write(T x, char y) { printf("%d %c", x, y); }
template <class T> void write(T x, string y) { printf("%d %s", x, y.c_str()); }
template <class T> void write(T x, double y) { printf("%d %lf", x, y); }
template <class T> void write(T x, int64 y) { printf("%d %lld", x, y); }