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
#include<fstream>

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
    //|              |------------------

    int x, y, z = 1;
    while (scanf("%d %d", &x, &y) != EOF)
        // the two '\n'
        printf("Case %d: %d\n\n", z++, x + y);
    //
    //Some other problems require us to output blank lines between
    //test case. If we use the approach above, we will end up with
    //an extra new line at the end of out output
    //To handle, we can use following change
    //
    //| Sample Input | Sample Output
    //| 1 2          | Case 1: 3
    //| 5 7          | 
    //| 6 3          | Case 2: 12
    //|--------------|
    //               | Case 3: 9
    //               |--------------------
    //
    while(scanf("%d %d", &x, &y) != EOF){
        if(z > 1) printf("\n"); //2nd/more cases
        printf("Case %d: %d\n", z++, a + b);
    }
    //**************Variable Number of Inputs****************
    //Way#3: Reading inputs (variable number)
    //For each test case (each input line), we are now given
    //an integer k (k >= 1), followed by k integers.
    //Output the sum of these k integers.
    //Assuming that the input is terminated by the EOF
    //signal and we do not require case numbering, following 
    //can be used
    //
    //| Sample Input | Sample Output
    //| 1 1          | 1
    //| 2 3 4        | 7
    //| 3 8 1 1      | 10
    //| 4 7 2 9 3    | 21
    //| 5 1 1 1 1 1  | 5
    //|----------------------------------------------------
    int k, ans, v;
    while(scanf("%d", &k) != EOF) {
        ans = 0;
        while(k--){
            scanf("%d", &v);
            ans += v;
        }
        printf("%d\n", ans);
    }
}
