/*
Consider a sample space S consisting of all perfect squares starting from 1, 4, 9 and so on.
You are given a number N, you have to output the number of integers less than N in the sample space S.
Expected Time Complexity: O(sqrt(N))
*/

class Solution{
  public:
  int countSquares(int N){
    int count = 0;

    for (int i = 1; i <= sqrt(N); i++)
    {
        if ((i*i)<N)
        {
            count=count+1;
        }
    }
    return count;
    }
};
