#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Abstract Class
class Compartment {
public:
    virtual string notice() = 0; 
    virtual ~Compartment() {}
};

// FirstClass Class
class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment";
    }
};

// Ladies Class
class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment";
    }
};

// General Class
class General : public Compartment {
public:
    string notice() {
        return "General Compartment";
    }
};

// Luggage Class
class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment";
    }
};

int main() {
    Compartment* compartments[10];

    srand(time(0));

    
    for (int i = 0; i < 10; i++) {
        int choice = rand() % 4 + 1; 

        switch (choice) {
            case 1:
                compartments[i] = new FirstClass();
                break;
            case 2:
                compartments[i] = new Ladies();
                break;
            case 3:
                compartments[i] = new General();
                break;
            case 4:
                compartments[i] = new Luggage();
                break;
        }
    }

    
    cout << "Compartment Notices:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Compartment " << i + 1 << ": "
             << compartments[i]->notice() << endl;
    }

    
    for (int i = 0; i < 10; i++) {
        delete compartments[i];
    }

    return 0;
}