#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        sort(s.begin(), s.end());
        if(s[0] == s[s.length() -1])
            cout<<-1<<endl;
        else
            cout<<s<<endl;
    }
}
/*
Algorithm :

1. Number of set bit in n is the size of the subset

2. if the ith bit is set in n then 3^(i-1) is in the set 

3. Hence find all the numbers in the set from the set bit of n and print them in increasing order



Why this works?

We will make one observation 

 All the powers of 3 less than i combined will be less than 3^i , where 1<=i<=40 (we will come to this range later )

 For example 3^1+ 3^2 <3^3

                      3^1 + 3^2 + 3^ 3 < 3^ 4 

    Although this is true for all Natural number

   So from this observation we can make sure that it is always beneficial to take lowest number from the sequence which  is not on the set 

For example sequence is 1 3 9 27 81 ............

                                set     1          (1)

                                              3    (10)

                                          1 3      (11)

                                                 9   (100)

                                         1      9    (101)

                                         1 3  9     (111)

                                                    27  (1000)

                                       And so on ....

So the sets can be represented by binary sequence  . 10^12 have around 40 bits , Hence we will need upto 3^39 (which fits in long long) as first one is 3^0

So now its too simple i guess

Take n  , and find how many set bit in n are ( N.B __builtin_popcount returns wrong answer as it can only count for integer value . So i manually counted the set bit in n)

Now simple iterate from 1 to 40 & check (1<<(i-1))&n is true or not  (try to make 1 long long otherwise it gives error for overflow)

if true then 3^(i-1) is in the set 

else not 

And as we are going from low to high so no need to worry about increasing order .
*/
