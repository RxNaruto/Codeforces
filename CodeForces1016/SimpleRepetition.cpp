#include <iostream>
using namespace std;
int main()
{
    int t;
    while (t--)
    {
        int n;
        cin >> n;
        
        bool flag = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}