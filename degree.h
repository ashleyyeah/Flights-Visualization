#pragma once

#include "edge.h"
#include "graph.h"

#include <unordered_map>

class degree
{
    private:
        Graph _g;
        std::unordered_map<Vertex, int> node_weight;
        std::unordered_map<std::string, std::pair<double, double>> locations;
        std::string r_file;
        std::string a_file;

    public:
        degree(std::string routefile, std::string airportfile);
        void readFromData();
        void drawOnMap();
        void readFromAirport();
        std::unordered_map<std::string, std::pair<double, double>> getLocations();
};