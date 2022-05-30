// CPP program to count number of changes
// to make all substrings distinct.
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

// Returns minimum changes to str so
// that no substring is repeated.
int minChanges(string &str)
{
    int n = str.length();

    // If length is more than maximum
    // allowed characters, we cannot
    // get the required string.
    if (n > MAX_CHAR)'

         return-1;



    // Variable to store count of
    // distinct characters
    int dist_count = 0;

    // To store counts of different
    // characters
    int count[MAX_CHAR] = {0};

    for (int i = 0; i < n; i++) {
        if (count[str[i] - 'a'] == 0)
            dist_count++;
        count[(str[i] - 'a')]++;
    }

    // Answer is, n - number of distinct char
    return (n - dist_count);
}

// Driver function
int main()
{
    string str = "murat";
    cout << minChanges(str);
    return 0;
}
