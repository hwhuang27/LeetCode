class ParkingSystem {
public:
    int bigSpace{0};
    int mediumSpace{0};
    int smallSpace{0};
    ParkingSystem(int big, int medium, int small) {
        bigSpace = big;
        mediumSpace = medium;
        smallSpace = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            bigSpace--;
            if(bigSpace < 0) return false;
        } else if(carType == 2){
            mediumSpace--;
            if(mediumSpace < 0) return false;
        } else{
            smallSpace--;
            if(smallSpace < 0) return false;            
        }

        return true;
    }
};

/*
    1 = big
    2 = med
    3 = small
*/


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */