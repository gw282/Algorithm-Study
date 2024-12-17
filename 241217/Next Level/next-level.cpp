#include <iostream>
using namespace std;

class User {
    public:
        string id;
        int level;

        User(string id, int level) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    string id;
    int level;

    User user1("codetree", 10);

    cin >> id >> level;
    User user2(id, level);
    cout << "user " << user1.id << " lv " << user1.level << endl;
    cout << "user " << user2.id << " lv " << user2.level << endl;

    return 0;
}
