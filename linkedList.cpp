#include <iostream>
#include <list>
#include <iterator>

void print(std::list<int> l)
{
    std::list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
        std::cout << ' ' << *i;
}

void replace(int oldValue, int newValue, std::list<int> l)
{
}
int main()
{
    std::list<int> li;
    int choice, value, times, oldValue, pos;
    do
    {
        std::cout << "\nLinked List\n1.Push Back\n2.Push Front\n3.Insert\n4.Pop Back\n5.Pop Front\n6.Erase\n7.Remove\n8.Reverse\n9.Sort\n10.Size\n11.Assign\n12.Replace\n13.Print\n0.Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nValue to be pushed back....";
            std::cin >> value;
            li.push_back(value);
            break;
        case 2:
            std::cout << "\nValue to be pushed front....";
            std::cin >> value;
            li.push_front(value);
            break;
        case 3:
        {
            std::cout << "\nValue to be inserted ";
            std::cin >> value;
            std::cout << "in the position of....";
            std::cin >> pos;
            std::cout << " by ";
            std::cin >> times;
            std::list<int>::iterator it;
            it = li.begin();
            advance(it, pos);
            li.insert(it, times, value);
            break;
        }
        case 4:
            std::cout << "\nPoping back...";
            li.pop_back();
            break;
        case 5:
            std::cout << "\nPoping front...";
            li.pop_front();
            break;
        case 6:
        {
            std::cout << "\nErase by position...";
            std::cin >> pos;
            std::list<int>::iterator it;
            it = li.begin();
            advance(it, pos);
            li.erase(it);
            break;
        }
        case 7:
            std::cout << "\nErase by value...";
            std::cin >> value;
            li.remove(value);
            break;
        case 8:
            std::cout << "\nList Reversed...";
            li.reverse();
            break;
        case 9:
            std::cout << "\nList sorted...";
            li.sort();
            break;
        case 10:
            std::cout << "\nSize of the List is ...." << li.size();
            break;
        case 11:
            std::cout << "\nAssign the value...";
            std::cin >> value;
            std::cout << " for ";
            std::cin >> times;
            li.assign(times, value);
            break;
        case 12:
        {
            std::cout << "\nReplace ";
            std::cin >> oldValue;
            std::cout << " with ";
            std::cin >> value;
            std::list<int>::iterator i;
            for (i = li.begin(); i != li.end(); i++)
            {
                if (*i == oldValue)
                    *i = value;
            }
            break;
        }
        case 13:
            std::cout << "\n";
            print(li);
            break;
        default:
            std::cout << "\n Thankyou";
            break;
        }
    } while (choice != 0);
}