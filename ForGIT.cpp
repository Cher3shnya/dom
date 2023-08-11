#include <iostream>
#include <string>
using namespace std;

class Seasons {
public:
    enum EnSeasons { Winter = 1, Spring = 2, Summer = 3, Autumn = 4 };

    EnSeasons s = EnSeasons::Winter;

    void SeasonsChange() {
        if (EnSeasons::Winter == s) {
            s = EnSeasons::Spring;
            cout << "Season: " << s << endl;
        }
        else if (EnSeasons::Spring == s) {
            s = EnSeasons::Summer;
            cout << "Season: " << s << endl;
        }
        else if (EnSeasons::Spring == s) {
            s = EnSeasons::Summer;
            cout << "Season: " << s << endl;
        }
        else if (EnSeasons::Summer == s) {
            s = EnSeasons::Autumn;
            cout << "Season: " << s << endl;
        }
        else if (EnSeasons::Autumn == s) {
            s = EnSeasons::Winter;
            cout << "Season: " << s << endl;
        }
    }
    EnSeasons SeasonsReturn() {
        return s;
    }
};

class ReverseSeasons : public Seasons {
public:
    EnSeasons s = EnSeasons::Autumn;

    void SeasonsChange() {
        if (s = EnSeasons::Autumn) {
            s = EnSeasons::Summer;
            cout << "Season: " << s << endl;
        }
        else if (s = EnSeasons::Summer) {
            s = EnSeasons::Spring;
            cout << "Season: " << s << endl;
        }
        else if (s = EnSeasons::Spring) {
            s = EnSeasons::Winter;
            cout << "Season: " << s << endl;
        }
        else if (s = EnSeasons::Winter) {
            s = EnSeasons::Autumn;
            cout << "Season: " << s << endl;
        }
    }
};

int main() {
    Seasons s1;
    ReverseSeasons s2;
    s1.SeasonsChange();
    s1.SeasonsReturn();
    cout << "_________\n";
    s2.SeasonsChange();
}
