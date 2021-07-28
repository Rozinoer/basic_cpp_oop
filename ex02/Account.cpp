#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
        std::cout << '[' << (now->tm_year + 1900) 
            << (now->tm_mon + 1)
            <<  now->tm_mday
            << '_'
            << now->tm_hour
            << now->tm_min
            << now->tm_sec
            << "] ";
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_amount = initial_deposit;
    _totalAmount+=initial_deposit;
    this->_accountIndex = _nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount
    << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount
    << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::makeDeposit( int deposit )
{
    Account::_nbDeposits++;
    Account::_amount += deposit;
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount
    << ";deposit:" << deposit << ";amount:" << Account::_amount
    << ";nb_deposits:"<< Account::_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (Account::_amount - withdrawal >= 0)
    {
        Account::_nbWithdrawals++;
        Account::_amount -= withdrawal;
        std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount
        << ";withdrawal:" << withdrawal << ";amount:" << Account::_amount
        << ";nb_withdrawal:"<< Account::_nbWithdrawals << std::endl;
        return (true);
    }
    else
    {
        std::cout << "index:" << Account::_accountIndex << ";p_amount:" << Account::_amount
        << ";withdrawal:refused" << std::endl;
        return (false);
    }
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ';';
    std::cout << "total:" << getTotalAmount() << ';';
    std::cout << "deposits:" << getNbDeposits() << ';';
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount
    << ";deposits:" << Account::_nbDeposits << ";withdrawals:" << Account::_nbWithdrawals<< std::endl;
    return ;
}