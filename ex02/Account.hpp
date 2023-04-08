#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Account {
public:
    Account(int initial_deposit);
    ~Account();
    int getNbAccounts();
    int getTotalAmount();
    int getNbDeposits();
    int getNbWithdrawals();
    void makeDeposit(int deposit);
    bool makeWithdrawal(int withdrawal);
    void displayStatus() const;
private:
    static int _nbAccounts;
    static int _totalAmount;
    static int _totalNbDeposits;
    static int _totalNbWithdrawals;
    int _accountIndex;
    int _amount;
    int _nbDeposits;
    int _nbWithdrawals;
    static void _displayTimestamp();
};

# endif /* ACCOUNT_HPP */
