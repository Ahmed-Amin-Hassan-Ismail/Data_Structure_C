#include <iostream>
#include <stack>

using namespace std;

bool arePaired(char open, char close)
{
    if (open == '{' && close == '}')
    {
        return true;
    }
    else if (open == '(' && close == ')')
    {
        return true;
    }
    else if (open == '[' && close == ']')
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool areBalanced(string exp)
{

    stack<char> s;

    for (size_t i = 0; i < exp.length(); i++)
    {

        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        {
            s.push(exp[i]);
        }
        else if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {

            if (s.empty() || !arePaired(s.top(), exp[i]))
            {
                return false;
            }
        }
        else
        {
            s.pop();
        }
    }
    return s.empty();
};

int main(int argc, char const *argv[])
{

    string expression;

    cout << "Enter an expression";
    cin >> expression;

    if(areBalanced(expression))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
};