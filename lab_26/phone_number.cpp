#include "phone_number.h"
#include <stdexcept>

PhoneNumber::PhoneNumber(const string& international_number)
{
    if (international_number.empty() || international_number[0] != '+')
    {
        throw invalid_argument(
            "Phone number must begin with '+' symbol and contain 3 parts separated by '-' symbol: "
            + international_number);
    }

    size_t first = international_number.find('-');
    size_t second = international_number.find('-', first + 1);

    if (first == string::npos || second == string::npos)
    {
        throw invalid_argument(
            "Phone number must begin with '+' symbol and contain 3 parts separated by '-' symbol: "
            + international_number);
    }

    country_code_ = international_number.substr(1, first - 1);
    city_code_ = international_number.substr(first + 1, second - first - 1);
    local_number_ = international_number.substr(second + 1);

    if (country_code_.empty() || city_code_.empty() || local_number_.empty())
    {
        throw invalid_argument(
            "Phone number must begin with '+' symbol and contain 3 parts separated by '-' symbol: "
            + international_number);
    }
}

string PhoneNumber::GetCountryCode() const
{
    return country_code_;
}

string PhoneNumber::GetCityCode() const
{
    return city_code_;
}

string PhoneNumber::GetLocalNumber() const
{
    return local_number_;
}

string PhoneNumber::GetInternationalNumber() const
{
    return "+" + country_code_ + "-" + city_code_ + "-" + local_number_;
}