#include<iostream>
#include<string>
using namespace std;

class Hero {
    private:
        string name;
        int power;
    
    public:
        Hero(string n, int p) {
            name = n;
            power = p;
        }
        
        // Getter for power
        int getPower() {
            return power;
        }
        
        string getName() {
            return name;
        }
};

class Villain {
    private:
        string name;
        int power;
    
    public:
        Villain(string n, int p) {
            name = n;
            power = p;
        }
        
        // Getter for power
        int getPower() {
            return power;
        }
        
        string getName() {
            return name;
        }
};

class Comparison {
    public:
        void comparePower(Hero h, Villain v) {
            cout << "Comparing powers:" << endl;
            cout << "Hero " << h.getName() << "'s power: " << h.getPower() << endl;
            cout << "Villain " << v.getName() << "'s power: " << v.getPower() << endl;
            
            if(h.getPower() > v.getPower()) {
                cout << "Hero " << h.getName() << " is more powerful!" << endl;
            }
            else if(h.getPower() < v.getPower()) {
                cout << "Villain " << v.getName() << " is more powerful!" << endl;
            }
            else {
                cout << "Both have equal power!" << endl;
            }
        }
};

int main() {
    // Create a hero and villain
    Hero hero("Superman", 95);
    Villain villain("Lex Luthor", 85);
    
    // Create comparison object
    Comparison battle;
    
    // Compare their powers
    battle.comparePower(hero, villain);
    
    // Create another pair with different powers
    Hero hero2("Batman", 80);
    Villain villain2("Joker", 80);
    
    // Compare their powers
    battle.comparePower(hero2, villain2);
    
    return 0;
}
