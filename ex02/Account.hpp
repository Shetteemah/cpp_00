#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP

# include <iostream>
# include <iomanip>
# include <ctime>

class Account {

public:
	typedef Account		t;

	Account(int initial_deposit);
	~Account(void);

	static void	displayAccountsInfos(void);
	void	makeDeposit(int deposit);
	bool	makeWithdrawal(int withdrawal);
	int		checkAmount(void) const;
	void	displayStatus(void) const;
	static int 	getNbAccounts(void);
	static int 	getTotalAmount(void);
	static int 	getNbDeposits(void);
	static int 	getNbWithdrawals(void);

private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	int			_accountIndex;
	int			_amount;
	int			_nbDeposits;
	int			_nbWithdrawals;
	static void	_displayTimestamp(void);

	Account(void);

};

# endif
