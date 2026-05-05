#include <iostream>
#include <string>
#include <vector>

class Account {
private:
    const long account_number;
    long transaction_id;
    std::string transaction_type;
    double balance;
    std::vector<std::string> log;

public:
    Account(const long acc_num) : account_number(acc_num), transaction_id(0), balance(0.0) {}

    long depositAmount(const long to, const long from, const double amount) {
        this->balance += amount;
        this->transaction_id = 1000 + (this->account_number * 2);
        this->transaction_type = "credit";
        
        std::string entry = "ID: " + std::to_string(this->transaction_id) + " | Type: " + this->transaction_type;
        this->log.push_back(entry);
        
        return this->transaction_id;
    }

    long creditAmount(const long to, const long from, const double amount) {
        if (amount <= this->balance) {
            this->balance -= amount;
            this->transaction_id = 2000 + (this->account_number * 3);
            this->transaction_type = "debit";
            
            std::string entry = "ID: " + std::to_string(this->transaction_id) + " | Type: " + this->transaction_type;
            this->log.push_back(entry);
            
            return this->transaction_id;
        }
        return -1;
    }

    void displayDetails() const {
        std::cout << "--- Account Statement ---" << std::endl;
        std::cout << "Account Number: " << this->account_number << std::endl;
        std::cout << "Current Balance: " << this->balance << std::endl;
        std::cout << "History: " << std::endl;
        for (const auto& entry : this->log) {
            std::cout << "  " << entry << std::endl;
        }
        std::cout << "-------------------------" << std::endl;
    }
};

int main() {
    Account users[5] = {
        Account(1001), 
        Account(1002), 
        Account(1003), 
        Account(1004), 
        Account(1005)
    };

    users[0].depositAmount(1001, 1001, 500.0);
    users[1].depositAmount(1002, 1002, 1200.0);
    users[2].depositAmount(1003, 1003, 750.0);

    users[0].creditAmount(1002, 1001, 100.0);
    users[1].creditAmount(1003, 1002, 250.0);

    for (int i = 0; i < 5; i++) {
        users[i].displayDetails();
    }

    return 0;
}