#include<iostream>
using namespace std;
#include<stack>
main()
{
    // creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    //top operation
    cout<<"\nPrinting top element : "<<s.top();

    //empty operation
    cout<<"\nIs stack empty ? "<<s.empty();

    if(s.empty())
    {
        cout<<"\nStack is empty";
    }
    else
    {
        cout<<"\nStack is not empty";
    }

    //size operation
    cout<<"\nSize of stack is : "<<s.size();
}
