#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> pS(t);
    vector<string> sS(t);

    for (int i = 0; i < t; i++)
    {
        cin >> pS[i];
        cin >> sS[i];
    }

    for (int i = 0; i < t; i++)
    {
        string rec = pS[i];
        string hd = sS[i];
        vector<string> st;

        for (int j = 0; j < rec.size(); j++)
        {
            if (rec[j] == 'L')
            {
                st.push_back("L");
                st.push_back("LL");
            }
            else if (rec[j] == 'R')
            {
                st.push_back("R");
                st.push_back("RR");
            }
        }

        int flag = 0;
        for (int j = 0; j < st.size(); j++)
        {
            if (st[j] == hd)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
