#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, size_t withdrawals)
    : Savings_Account{name, balance, int_rate}, withdrawals {withdrawals} {
}

bool Trust_Account::deposit(double amount) {
    if (amount >= bonus_threshold )
        amount += deposit_bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if (withdrawals >= max_withdrawals || amount > balance * max_withdrawal_percentage)
        return false;
    withdrawals++;
    return Savings_Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%, " << account.withdrawals << " Withdrawals]";
    return os;
}