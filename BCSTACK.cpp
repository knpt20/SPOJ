#include <iostream>
#include <vector>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    vector<int> v;
    string str;


    while (cin >> str){
        if (str == "init"){
            v.clear();
        }
        else if (str == "push"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (str == "pop"){
            if (v.size() > 0) 
                v.pop_back();
        }
        else if (str == "top"){
            if (v.size() > 0)
                cout << v.back();
            else cout << -1;
            cout << "\n";
        }
        else if (str == "size"){
            cout << v.size() << "\n";
        }
        else if (str == "empty"){
            if (v.empty())
                cout << 1;
            else cout << 0;
            cout << "\n";
        }
    }

    return 0;
}
