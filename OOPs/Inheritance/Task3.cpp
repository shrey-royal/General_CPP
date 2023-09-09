// 3. Game Character Development with Traits:
//    Develop a game character system that employs hybrid inheritance to combine traits like combat abilities, magical skills, and stealth capabilities. Design a base class for the character and multiple classes for each trait. Demonstrate how hybrid inheritance can help create diverse character types while avoiding the diamond problem and ensuring a coherent character hierarchy.

#include <iostream>
#include <string>
using namespace std;

class Character {
private:
    string name;

public:
    Character(string name) {
        this->name = name;
    }

    void introduce() {
        cout << "Hello, I am " << name << ", a character." << endl;
    }
};

class CombatAbilities {
public:
    void attack() {
        cout << "Attacking with a sword!" << endl;
    }
};

class MagicalSkills {
public:
    void castSpell() {
        cout << "Casting a fireball spell!" << endl;
    }
};

class StealthCapabilities {
public:
    void sneak() {
        cout << "Sneaking through the shadows." << endl;
    }
};

class Warrior : public Character, public CombatAbilities {
public:
    Warrior(string name) : Character(name) {}

    void performSpecialAttack() {
        cout << "Performing a powerful special attack!" << endl;
    }
};

class Mage : public Character, public MagicalSkills {
public:
    Mage(string name) : Character(name) {}

    void learnSpell() {
        cout << "Learning a new spell!" << endl;
    }
};

class Rogue : public Character, public StealthCapabilities {
public:
    Rogue(string name) : Character(name) {}

    void backstab() {
        cout << "Performing a deadly backstab!" << endl;
    }
};

int main() {
    Warrior warrior("Kanhaiya");
    Mage mage("Kanha");
    Rogue rogue("Devam");

    warrior.introduce();
    warrior.attack();
    warrior.performSpecialAttack();

    mage.introduce();
    mage.castSpell();
    mage.learnSpell();

    rogue.introduce();
    rogue.sneak();
    rogue.backstab();

    return 0;
}