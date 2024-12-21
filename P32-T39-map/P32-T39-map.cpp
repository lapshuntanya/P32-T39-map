#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> words;
    string user;

    do {
        cout << "Input word: "; cin >> user;

        auto item = words.find(user);
        if (item == words.end()) {
           // words.insert(pair<string, int>(user, 1));
            words[user] = 1;
        }
        else {
           // item->second = item->second + 1;
            words[user]++;
        }
    } while (user != "stop");
    cout << "------------------------------------\n";
    words.erase("stop");
    /*for (auto node : words) { cout << node.first << " " << node.second << endl;   }*/

    for (auto it = words.begin(); it != words.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }   
    return 0;
}
