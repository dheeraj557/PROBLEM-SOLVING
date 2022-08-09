class ParkingSystem {
public:
    
    vector<int> cars, lot;
    
    ParkingSystem(int big, int medium, int small) {
        lot.resize(4);
        lot[1] = big, lot[2] = medium, lot[3] = small;
        cars.resize(4, 0);
    }
    
    bool addCar(int carType) {
         
        if(cars[carType] < lot[carType])
        {
            cars[carType]++;
            return true;
        }
        
        return false;
        
    }
};