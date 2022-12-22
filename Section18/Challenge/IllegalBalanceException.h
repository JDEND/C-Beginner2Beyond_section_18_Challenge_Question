#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() noexcept = default;
    const char* what() const noexcept override {
        return "Balance may not be negative";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
