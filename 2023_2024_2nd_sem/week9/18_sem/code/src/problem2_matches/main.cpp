#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


class FootballTeam{
    
};


void parseLineTeam(const std::string& line, std::string& name, std::string& city, std::string& stadium, double& level)
{
    size_t posName = line.find(',');
    name = line.substr(0, posName);
    
    size_t posCity = line.find(',', posName + 1);
    city = line.substr(posName + 1, posCity - posName - 1);
    
    size_t posStadium = line.find(',', posCity + 1);
    stadium = line.substr(posCity + 1, posStadium - posCity - 1);
    
    size_t posLevel = line.size() - 1;
    std::string levelString = line.substr(posStadium + 1, posLevel - posStadium);
    std::stringstream ss(levelString);
    ss >> level;
    
}

void loadTeams(std::istream& in, std::vector<FootballTeam>& teams)
{
    std::string buffer;
    std::getline(in, buffer);
    while(std::getline(in, buffer))
    {
        std::string name;
        std::string city;
        std::string stadium;
        double level;
        parseLineTeam(buffer, name, city, stadium, level);
        std::cout << "name = " << name << "\n";
        std::cout << "city = " << city << "\n";
        std::cout << "stadium = " << stadium << "\n";
        std::cout << "level = " << level << "\n\n";
    }
}


int main()
{
    const std::string FILENAME = "../../data/problem2_matches/football.csv";
    std::ifstream inputFile;
    inputFile.open(FILENAME);
    
    std::vector<FootballTeam> teams;
    loadTeams(inputFile, teams);
    
    return 0;
}
