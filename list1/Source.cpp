#include "list.h"

int main()
{
    int key, y, v;
    list<int>::iterator it;
    list <int> l;
    cout << "0 - create(clear) list" << endl;
    cout << "1 - print list" << endl;
    cout << "2 - insert element value before element x" << endl;
    cout << "3 - insert element value after element x" << endl;
    cout << "4 - insert element value in the tail of the list" << endl;
    cout << "5 - delete element value" << endl;
    cout << "6 - make lists l1, which contains positive numbers, and list l2, which contains negative numbers" << endl;
    cout << "9 - exit" << endl;
    cout << "input selected menu item ";
    cin >> key;
    while (key != 9)
    {
        switch (key)
        {
        case 0:
            l.clear();
            break;
        case 1:
            if (l.empty()) cout << "The list is empty" << endl;
            else
                cout << "current list: ";
            for (it = l.begin(); it != l.end(); cout << *it << ' ', it++);
            cout << "\n";
            break;
        case 2:
            if (l.empty()) cout << "The list is empty" << endl;
            else
            {
                cout << "Enter the input element value: ";
                cin >> v;
                cout << "Enter the element x: ";
                cin >> y;
                it = find(l.begin(), l.end(), y);
                if (it == l.end()) cout << "There isn't such element in the list" << endl;
                else
                    l.emplace(it, v);
            }
            break;
        case 3:
            if (l.empty()) cout << "The list is empty" << endl;
            else
            {
                cout << "Enter the input element value: ";
                cin >> v;
                cout << "Enter the element x: ";
                cin >> y;
                it = find(l.begin(), l.end(), y);
                if (it == l.end()) cout << "There isn't such element in the list" << endl;
                else
                {
                    it++;
                    l.emplace(it, v);
                }
            }
            break;
        case 4:
            cout << "Enter the input value: ";
            cin >> v;
            l.emplace_back(v);
            break;
        case 5:
            if (l.empty()) cout << "The list is empty" << endl;
            else
            {
                cout << "Enter the value: ";
                cin >> v;
                it = find(l.begin(), l.end(), v);
                if (it == l.end()) cout << "There isn't such element in the list" << endl;
                else
                    l.erase(it);
            }
            break;
        case 6:
            if (l.empty()) cout << "The list is empty" << endl;
            else
            {
                pair < list<int>, list<int> > a = pml(l);
                cout << "The '+' list is: ";
                for (it = a.first.begin(); it != a.first.end(); cout << *it << ' ', it++);
                cout << "\nThe '-' list is: ";
                for (it = a.second.begin(); it != a.second.end(); cout << *it << ' ', it++);
                cout << "\n";
            }
            break;
        default:
            cout << "There isn't such command" << endl;
            break;
        }
        cout << "input selected menu item ";
        cin >> key;
    }
}
