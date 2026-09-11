import std;
import airline_ticket;

int main() {
    AirlineTicket myTicket;

    myTicket.setPassengerName("Blessed Sibanda");
    myTicket.setNumberOfMiles(706);

    double cost {myTicket.calculatePriceInDollars()};

    const auto name {myTicket.getPassengerName()};

    std::println("Hie {}, this ticket will cost ${}", name,cost);
}