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

    cout << "rent is: " << expenceObj.rent << endl; 
    cout << "other expences is: " << expenceObj.expences << endl;
    return 0;
}