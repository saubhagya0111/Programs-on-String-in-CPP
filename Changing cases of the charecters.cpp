#include <bits/stdc++.h>
using namespace std;
void basic_app(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        else if (s[i] >= 97 && s[i] <= 127)
        {
            s[i] -= 32;
        }
    }
    cout << s << endl;
}
void sys(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}
int main()
{
    cout << "enter the string\n";
    string s;
    getline(cin, s);
    cout << "\nPress 1 for conventional approach\n2 for using the inbuilt system functions\n";
    char ch;
    cin >> ch;
    if (ch == 1)
    {
        basic_app(s);
    }
    else if (ch == 2)
    {
        sys(s);
    }
    else
    {
        cout << "invalid input\n";
    }

    return 0;
}
