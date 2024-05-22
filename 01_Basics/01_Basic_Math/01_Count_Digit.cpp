/*

Given a number N. Count the number of digits in N which evenly divide N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly


Example 2:

Input:
N = 23
Output
0
Explanation:
2 and 3, none of them
divide 23 evenly    

*/


#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int cpy = N;
        int count = 0;
        while(cpy>0)
        {
            int r = cpy%10;
            cpy = cpy/10;
            if(r!=0 && N%r == 0)
                count++;
        }
        return count;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}