#include <iostream>
using namespace std;

class Agent007 {

    public:
        string code;
        char point;
        int time;

        Agent007(string code, char point, int time) {
            this->code = code;
            this->point = point;
            this->time = time;
        }

};

int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;
    Agent007 agent(code, point, time);

    cout << "secret code : " << agent.code << endl;
    cout << "meeting point : " << agent.point << endl;
    cout << "time : " << agent.time << endl;

    return 0;
}
