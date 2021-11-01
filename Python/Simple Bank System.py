"""
Problem Statement:

You have been tasked with writing a program for a popular bank that will automate all its incoming transactions (transfer, deposit, and withdraw). The bank has n accounts numbered from 1 to n. The initial balance of each account is stored in a 0-indexed integer array balance, with the (i + 1)th account having an initial balance of balance[i].

Execute all the valid transactions. A transaction is valid if:

The given account number(s) are between 1 and n, and
The amount of money withdrawn or transferred from is less than or equal to the balance of the account.
Implement the Bank class:

Bank(long[] balance) Initializes the object with the 0-indexed integer array balance.
boolean transfer(int account1, int account2, long money) Transfers money dollars from the account numbered account1 to the account numbered account2. Return true if the transaction was successful, false otherwise.
boolean deposit(int account, long money) Deposit money dollars into the account numbered account. Return true if the transaction was successful, false otherwise.
boolean withdraw(int account, long money) Withdraw money dollars from the account numbered account. Return true if the transaction was successful, false otherwise.
"""


class Bank:

    def __init__(self, balance: List[int]):
        self.ans=balance
    def transfer(self, account1: int, account2: int, money: int) -> bool:
        try:
            m=self.ans[account1-1]
            n=self.ans[account2-1]
            if(money<=self.ans[account1-1]):
                self.ans[account1-1]-=money
                self.ans[account2-1]+=money
                return 1
            else:
                return 0
        except:
            return 0
    def deposit(self, account: int, money: int) -> bool:
        try:
            self.ans[account-1]+=money
            return 1
        except:
            return 0
    def withdraw(self, account: int, money: int) -> bool:
        try:
            if(money<=self.ans[account-1]):
                self.ans[account-1]-=money
                return 1
            else:
                return 0
        except:
            return 0


# Your Bank object will be instantiated and called as such:
# obj = Bank(balance)
# param_1 = obj.transfer(account1,account2,money)
# param_2 = obj.deposit(account,money)
# param_3 = obj.withdraw(account,money)
