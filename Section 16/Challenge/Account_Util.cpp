#include <iostream>
#include "Account_Util.h"

// Helper Functions for Account class

// Displays Account objects in a vector of Account objects
void display(const std::vector<Account> &accounts) {
    std::cout << "\n ======= Accounts ================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

// Desposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts , double amount) {
    std::cout << "\n ======= Depositing to Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposited of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n ======= Withdrawing from Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Helper Functions for Savings Account class

// Displays Account objects in a vector of Savings_Account objects
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n ======= Savings Accounts ================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

// Desposits supplied amount to each Savings_Account object in the vector
void deposit(std::vector<Savings_Account> &accounts , double amount) {
    std::cout << "\n ======= Depositing to Savings Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposited of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Savings_Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n ======= Withdrawing from Savings Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Helper functions for Checking Account class

// Displays Account objects in a vector of Checking_Account objects
void display(const std::vector<Checking_Account> &accounts) {
    std::cout << "\n ======= Checking Accounts ================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

// Desposits supplied amount to each Checking_Account object in the vector
void deposit(std::vector<Checking_Account> &accounts , double amount) {
    std::cout << "\n ======= Depositing to Checking Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposited of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Checking_Account object in the vector
void withdraw(std::vector<Checking_Account> &accounts, double amount) {
    std::cout << "\n ======= Withdrawing from Checking Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Utility helper functions for Trust Account class

// Displays Account objects in a vector of Trust_Account objects
void display(const std::vector<Trust_Account> &accounts) {
    std::cout << "\n ======= Trust Accounts ================================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl;
}

// Desposits supplied amount to each Trust_Account object in the vector
void deposit(std::vector<Trust_Account> &accounts , double amount) {
    std::cout << "\n ======= Depositing to Trust Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposited of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Trust_Account object in the vector
void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    std::cout << "\n ======= Withdrawing from Trust Accounts ================================" << std::endl;
    for (auto &acc : accounts) {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}