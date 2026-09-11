//
// Created by Blessed Sibanda on 11/9/2026.
//


module airline_ticket;

using namespace std;

double AirlineTicket::calculatePriceInDollars() const {
    if (hasEliteSuperRewardsStatus()) {
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

std::string AirlineTicket::getPassengerName() {
    return m_passengerName;
}

void AirlineTicket::setPassengerName(const std::string &name) {
    m_passengerName = name;
}

int AirlineTicket::getNumberOfMiles() const {
    return m_numberOfMiles;
}

void AirlineTicket::setNumberOfMiles(const int miles) {
    m_numberOfMiles = miles;
}

bool AirlineTicket::hasEliteSuperRewardsStatus() const {
    return m_hasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(const bool status) {
    m_hasEliteSuperRewardsStatus = status;
}