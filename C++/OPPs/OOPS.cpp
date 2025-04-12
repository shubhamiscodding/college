#include <iostream>
using namespace std;

class oops {
private:
   float opp;
public:
   oops(float a) {
       opp = a;
   }
   void sum(float sss) {
       opp += sss;
   }
   void out() {
       cout << opp << endl;
   }
   float getOpp() {  // ✅ Added getter function
       return opp;
   }
};

class BankAccount : public oops {
private:
    double balance;
public:
    BankAccount(double initialBalance) : oops(100.02) { 
        balance = initialBalance;
    }

    void deposit(double amount) {
        cout << "Oops Value: " << getOpp() << endl; // ✅ Using getter to access `opp`
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class Student {
private:
    string name;
    int age;
public:
    void setName(string n) { name = n; }
    void setAge(int a) {
        if(a > 0) age = a;
        else cout << "Invalid age!" << endl;
    }
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    cout << "OOPS" << endl;
    oops obj1(5.55);
    obj1.sum(0.05);
    obj1.out();

    BankAccount myAccount(1000);
    myAccount.deposit(500);
    myAccount.showBalance();

    Student s;
    s.setName("fenil");
    s.setAge(28);
    cout << "Name: " << s.getName() << ", Age: " << s.getAge() << endl;

    return 0;
}
