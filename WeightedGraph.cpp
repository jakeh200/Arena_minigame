//
//  WeightedGraph.cpp
//  Brimhaven
//
//  Created by Jake Hickey on 9/29/17.
//  Copyright © 2017 Jake Hickey. All rights reserved.
//

#include "WeightedGraph.hpp"
#include <iostream>

matrix::matrix(int n){
    this->n = n;
    adj = new int* [n];
    visited = new bool [n];
    
    for(int i = 0; i < n; i++){
        adj[i] = new int [n];
        for (int j = 0; j < n; j++){
            adj[i][j] = 0;
        }
    }
}

void matrix::add_edge(int x, int y){
    if(x > n || y > n || x < 0 || y < 0){
        std::cout << "That wont work";
    }else{
        adj[x - 1][y - 1] = 1;
    }
}

