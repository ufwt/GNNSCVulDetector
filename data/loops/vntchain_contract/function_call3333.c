#include "vntlib.h"

KEY uint32 v = 0;

KEY mapping(address, uint32) account;

constructor Test1(){}

MUTABLE
uint64 test1(uint32 amount){
    v = amount;
    address to = GetSender();
    account.key = to;
    account.value = U256SafeAdd(account.value, amount);
    return account.value;
}



