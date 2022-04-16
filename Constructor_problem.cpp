#include <iostream>
using namespace std;

class monthlyExpence {
    public:
    int rent;
    double expences;
    monthlyExpence  (int x) {
        rent = x;
    };
    monthlyExpence  (double y) {
        expences = y;
    };
};

int main(){
    monthlyExpence rentObj (200);
    monthlyExpence expencesObj (200.2);

    cout << "rent is: " << rentObj.rent << endl; 
    cout << "other expences is: " << expencesObj.expences << endl;
    return 0;
}