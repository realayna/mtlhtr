#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
using namespace std::chrono_literals;

void refreshForecast(std::map<std::string, int> forecastmap)
{
    while (true)
    {
        for (auto& item : forecastmap)
        {
            item.second++;
            std::cout << item.first << " - " << item.second << std::endl;
        }

        std::this_thread::sleep_for(2000ms);
    }
}

int main()
{
    std::map<std::string, int> forecastmap = {
        {"New York", 15},
        {"Mumbai", 20},
        {"Berlin", 18}};
    
    std::thread bgworker(refreshForecast, forecastmap);
    bgworker.join();

}