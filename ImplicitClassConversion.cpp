#include <iostream>
using namespace std;

class IndianStateCensus{
     public:
        string stateName;
        int stateCode;
        int population;
        int area;

        IndianStateCensus(string stateName, int stateCode, int population, int area){
            this ->stateName = stateName;
            this ->stateCode = stateCode;
            this->population = population;
            this ->area = area;            
        }

         void display(){
            cout << "State name : " << stateName << endl;
            cout << "State Code :" << stateCode << endl;
            cout << "Population :" << population << endl;
            cout << "area : " << area << endl;
        }
};  

class IndianStateCensusDao{
    public:
        int stateCode;
        int area;

        IndianStateCensusDao(IndianStateCensus &census){
            this->stateCode = census.stateCode ;
            this ->area = census.area;
        }

        void display(){
            cout << "State Code :" << stateCode << endl;
            cout << "area : " << area << endl;
        }
};

int main (){
    IndianStateCensus censusData("GA", 08, 2000, 800);
    IndianStateCensusDao dao = censusData;
    censusData.stateCode = 28;
    censusData.display();
    dao.display();
}