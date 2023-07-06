#include <iostream>
#include <vector>

using namespace std;

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms) 
    : bedrooms_(bedrooms), bathrooms_(bathrooms) {}
    
    int get_price() {
        return 50*bedrooms_ + 100*bathrooms_;
    }
private:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms) 
    : HotelRoom(bedrooms, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};

int main() {
    int n;
    cin >> n;
    vector<HotelRoom*> h_rooms;
    vector<HotelApartment*> h_apparts;
    for (int i = 0; i < n; ++i) {
        string room_type;
        int bedrooms;
        int bathrooms;
        cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            h_rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            h_apparts.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : h_rooms) {
        total_profit += room->get_price();
        
    }
    for (auto room : h_apparts) {
        total_profit += room->get_price();
        
    }
    cout << total_profit << endl;

    for (auto room : h_rooms) {
        delete room;
    }
    h_rooms.clear();
    
    for (auto room : h_apparts) {
        delete room;
    }
    h_apparts.clear();
    return 0;
}
