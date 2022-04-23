#include <iostream>
using namespace std;

class monthlyExpence {
    public:
    int rent;
    int expences;
    void inputRent  (int x) {
        rent = x;
    };
    void inputExpences (int y) {
        expences = y;
    };
};

int main(){
    monthlyExpence expenceObj;
    expenceObj.inputRent(1000);
    expenceObj.inputExpences(2000);

// এখানে তুমি চাইলে এভাবে না লিখে নিচের মত করে লিখলে ও হবে
    cout << "rent is: " << expenceObj.rent << endl; 
    cout << "other expences is: " << expenceObj.expences << endl;

// এভাবে লিখলে ও হবে
    cout << "rent is: ";
    cout << expenceObj.rent << endl; 
    cout << "other expences is: "; 
    cout << expenceObj.expences << endl;

// এটা এভাবে লেখার কারন কোড কমানো ঃ)


    return 0;
}