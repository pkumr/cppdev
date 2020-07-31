//cpp template for comp programming (IDate - 07/26/2020)
//
//

//suppress warning messages for VC++
#define _CRT_SECURE_NO_DEPRECATE


#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000 //1B

int main(){
    //quick calculations
    //ans = a ? b : c; // to simplify: if(a) ans = b else ans = c
    //ans += val; // to simplify: ans = ans + val;
    //index = (index + 1) % n; // index++; if (index >=n) index = 0;
    //index = (index + n - 1) % n; // index--; if (index < 0) index = n-1;
    //int ans = (int)((double)d + 0.5); // for rounding to nearest integer
    //ans = min(ans, new_computation); //min/max shortcut
    //

    //*********** Ways to read input and print output**********
    //Way#1 - Reading from inputs
    //
    //| Sample Input | Sample Output
    //| 3            | 3
    //| 1 2          | 12
    //| 5 7          | 9
    //| 6 3          |
    //-------------------------------
    //
    //
    int TC, a, b;
    scanf("%d", &TC); //number of test cases
    while(TC--){ //shortcut to repeat until 0
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}
