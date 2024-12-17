#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Weather {
public:
    string date;
    string day;
    string weather;

    Weather(string date, string day, string weather) {
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Weather> weatherData;

    for (int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        weatherData.push_back(Weather(date, day, weather));
    }

    string closestRainDate;
    for (const auto& data : weatherData) {
        if (data.weather == "Rain") {
            if (closestRainDate.empty() || data.date < closestRainDate) {
                closestRainDate = data.date;
            }
        }
    }

    for (const auto& data : weatherData) {
        if (data.date == closestRainDate) {
            cout << data.date << " " << data.day << " " << data.weather << endl;
            break;
        }
    }

    return 0;
}
