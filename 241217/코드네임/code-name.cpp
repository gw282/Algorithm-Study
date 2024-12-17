#include <iostream>
#include <string>
using namespace std;

class Agent {
    public:
        string codename;
        int score;

        Agent() {
            codename = "";
            score = 0;
        }

        Agent(string codename, int score) {
            this->codename = codename;
            this->score = score;
        }
};

int main() {
    Agent agents[5];

    for (int i = 0; i < 5; i++) {
        string codename;
        int score;
        cin >> codename >> score;
        agents[i] = Agent(codename, score);
    }

    Agent lowestAgent = agents[0];

    for (int i = 1; i < 5; i++) {
        if (agents[i].score < lowestAgent.score) {
            lowestAgent = agents[i];
        }
    }

    cout << lowestAgent.codename << " " << lowestAgent.score << endl;

    return 0;
}
