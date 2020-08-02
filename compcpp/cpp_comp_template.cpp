//cpp template for comp programming (IDate - 07/26/2020)
//
//

//suppress warning messages for VC++
#define _CRT_SECURE_NO_DEPRECATE


#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<ios>

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

    //****************Case Numbers and Blank Lines **************
    //Way#2 - Reading from intputs and Case outputs
    //
    //Some problems with multiple test cases require the output
    //of each test case to be numbered sequentially. Some also
    //require a blannk line after each test case.
    //Output format : "Case [NUMBER]: [ANSWER]" followed by
    //blank line for each test case.
    //
    //| Sample Input | Sample Output
    //| 1 2          | Case 1: 3
    //| 5 7          | 
    //| 6 3          | Case 2: 12
    //|--------------|
    //|              | Case 3: 9
    //|              |
    //|              |
    //|              |------------------

    int x, y, z = 1;
    while (scanf("%d %d", &a, &b) != EOF)
        // the two '\n'
        printf("Case %d: %d\n\n", z++, x + y);
    //
    //Some other problems

}
