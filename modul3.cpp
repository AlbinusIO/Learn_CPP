#include <iostream>
#include <string>
using namespace std;

struct Weapon {
    string nama;
    int attackPower;
};

struct Character {
    string nama;
    string kelas;
    int level;
    int hp, mp;
    Weapon senjata;
};

int main() {
    Character hero;
    hero.nama = "Invoker";
    hero.kelas = "Mages";
    hero.level = 11;
    hero.hp = 500;
    hero.mp = 150;
    hero.senjata = {"Cold Snap, Chaos Meteor, and Sun Strike", 40};

    cout << "=== Data Hero Dota2 ===\n";
    cout << "Nama   : " << hero.nama << endl;
    cout << "Kelas  : " << hero.kelas << endl;
    cout << "Level  : " << hero.level << endl;
    cout << "HP/MP  : " << hero.hp << "/" << hero.mp << endl;
    cout << "Senjata: " << hero.senjata.nama 
         << " (Attack Power: " << hero.senjata.attackPower << ")\n";
}
