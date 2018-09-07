#include <iostream>
#include <queue>
int main()
{
    std::queue<int> intQueue();
    intQueue.push(1);
    intQueue.push(2);
    intQueue.push(3);
    intQueue.push(4);
    intQueue.push(5);
    intQueue.push(6);
    intQueue.push(7);
    intQueue.push(8);
    intQueue.push(9);
    std::cout << "Size is ..." << intQueue.size();
    std::cout << "\nBack Element is ..." << intQueue.back()<<"\n";
    while (!intQueue.empty())
    {
        std::cout << ' ' << intQueue.front();
        intQueue.pop();
    }
}