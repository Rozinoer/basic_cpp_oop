
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts; // кол - во аккаунтов
	static int	_totalAmount; // сумма средст на ВСЕХ аккаунтах
	static int	_totalNbDeposits; // общие кол - во операций по внесению средств
	static int	_totalNbWithdrawals; //общая сумма снятых средств

	static void	_displayTimestamp( void );

	int				_accountIndex; // индекс
	int				_amount; // сумма на счете
	int				_nbDeposits; // кол - во операций по внесению
	int				_nbWithdrawals; // кол - во операций по снятию

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */