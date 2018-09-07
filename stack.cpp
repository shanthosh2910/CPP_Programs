#include <iostream>
#include <stack>
int main()
{
    std::stack<int> intStack, intStack1;
    intStack.push(5);
    intStack.push(4);
    intStack.push(3);
    intStack.push(2);
    intStack.push(1);
    std::cout << "size..." << intStack.size();
    std::cout << "\n Elements are....";
    while (!intStack.empty())
    {
        std::cout << ' ' << intStack.top();
        intStack.pop();
    }
    intStack1.push(10);
    // both stacks get swapped
    intStack.swap(intStack1); 
    std::cout << "\nSize of intStack is..." << intStack.size();
}