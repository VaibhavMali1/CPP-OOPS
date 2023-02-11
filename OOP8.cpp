#include <iostream>
 
class Car {
    private:
        static std::string colour;
        std::string brand;
        std::string state;
        int model;  
    public:
        Car(int model, std::string brand, std::string state = "off") 
        { 
            this->model = model; 
            this->brand = brand;
            this->state = state;
        }
        void engineOn()
        {
            state = "on";   
        }
        void knowState()
        {
            std::cout << "Is " << brand << " ready?" << std::endl;
        }
        void isReady()
        {
            if(state == "on")
                std::cout << colour << " " << brand
                          << " is ready to go!" << std::endl;
            else
                std::cout << colour << " " << brand
                          << " is not ready!" << std::endl;
        }
};
 

std::string Car::colour = "Red";
 
int main()
{
    Car chevy(1965, "Chevy Mint", "on");
    chevy.knowState();
    chevy.isReady();
    Car ferrari(1965, "Ferrari" );
    ferrari.knowState();
    ferrari.isReady();
}