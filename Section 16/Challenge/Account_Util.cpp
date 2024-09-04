#include <iostream>
#include "Account_Util.h"

// Helper Functions for Account class

// Displays Account objects in a vector of Account object pointers
void display(const std::vector<Account *> &accounts) {
    std::cout << "\n ======= Accounts ================================" << std::endl;
    for (const auto* const &acc : accounts)
        std::cout << *acc << std::endl;
}

// Desposits supplied amount to each Account object pointer in the vector
void deposit(std::vector<Account *> &accounts , double amount) {
    std::cout << "\n ======= Depositing to Accounts ================================" << std::endl;
    for (auto* const &acc : accounts) {
        if (acc->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposited of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object pointer in the vector
void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n ======= Withdrawing from Accounts ================================" << std::endl;
    for (auto* const &acc : accounts) {
        if (acc->withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    }
}