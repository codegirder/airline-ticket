//
// Created by Blessed Sibanda on 11/9/2026.
//

export module airline_ticket;

import std;

export class AirlineTicket
{
public:
    [[nodiscard]] double calculatePriceInDollars() const;

    std::string getPassengerName();
    void setPassengerName(const std::string &name);

    [[nodiscard]] int getNumberOfMiles() const;
    void setNumberOfMiles(int miles);

    [[nodiscard]] bool hasEliteSuperRewardsStatus() const;
    void setHasEliteSuperRewardsStatus(bool status);

private:
    std::string m_passengerName{"Unknown Passenger"};
    int m_numberOfMiles{0};
    bool m_hasEliteSuperRewardsStatus{false};
};
