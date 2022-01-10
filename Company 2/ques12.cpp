// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string str; // To store result (Excel column name)
        int i = 0; // To store current index in str which is result

        while (n > 0) {
            // Find remainder
            int rem = n % 26;

            // If remainder is 0, then a 'Z' must be there in output
            if (rem == 0) {
                str = 'Z' + str;
                n = (n / 26) - 1;
            }
            else
            {
                str = char((rem - 1) + 'A') + str;
                n = n / 26;
            }
        }

        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}
  // } Driver Code Ends