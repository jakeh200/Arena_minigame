//
//  main.cpp
//  Brimhaven
//
//  Created by Jake Hickey on 9/29/17.
//  Copyright © 2017 Jake Hickey. All rights reserved.
//

#include <iostream>
#include "WeightedGraph.hpp"

int main(int argc, const char * argv[]) {
    
    WeightedGraph m(25);
    
    vertex *v1 = new vertex("1");
    vertex *v2= new vertex("2");
    vertex *v3= new vertex("3");
    vertex *v4= new vertex("4");
    vertex *v5= new vertex("5");
    vertex *v6= new vertex("6");
    vertex *v7= new vertex("7");
    vertex *v8= new vertex("8");
    vertex *v9= new vertex("9");
    vertex *v10= new vertex("10");
    vertex *v11= new vertex("11");
    vertex *v12= new vertex("12");
    vertex *v13= new vertex("13");
    vertex *v14= new vertex("14");
    vertex *v15= new vertex("15");
    vertex *v16= new vertex("16");
    vertex *v17= new vertex("17");
    vertex *v18= new vertex("18");
    vertex *v19= new vertex("19");
    vertex *v20= new vertex("20");
    vertex *v21= new vertex("21");
    vertex *v22= new vertex("22");
    vertex *v23= new vertex("23");
    vertex *v24= new vertex("24");
    vertex *v25= new vertex("25");
    
    m.add_vertex(v1);
    m.add_vertex(v2);
    m.add_vertex(v3);
    m.add_vertex(v4);
    m.add_vertex(v5);
    m.add_vertex(v6);
    m.add_vertex(v7);
    m.add_vertex(v8);
    m.add_vertex(v9);
    m.add_vertex(v10);
    m.add_vertex(v11);
    m.add_vertex(v12);
    m.add_vertex(v13);
    m.add_vertex(v14);
    m.add_vertex(v15);
    m.add_vertex(v16);
    m.add_vertex(v17);
    m.add_vertex(v18);
    m.add_vertex(v19);
    m.add_vertex(v20);
    m.add_vertex(v21);
    m.add_vertex(v22);
    m.add_vertex(v23);
    m.add_vertex(v24);
    m.add_vertex(v25);
    
    m.add_edge(0, 1, 11.5, 16, "Ledge");
    m.add_edge(0, 5, 5.0, 0, "Blade");
    m.add_edge(1, 2, 9.0, 8, "Low wall");
    m.add_edge(1, 6, 4.0, 25, "Pressure pads");
    m.add_edge(2, 3, 16.0, 22, "Handholds");
    m.add_edge(2, 7, 11.0, 10, "Balancing rope");
    m.add_edge(3, 4, 9.0, 6, "Planks");
    m.add_edge(3, 8, 11.0, 12, "Log Balance");
    m.add_edge(4, 9, 5.0, 20, "Rope swing");
    m.add_edge(5, 6, 11.0, 12, "Log balance");
    m.add_edge(5, 10, 5.0, 24, "Floor spikes");
    m.add_edge(6, 7, 5.0, 28, "Spin blades");
    m.add_edge(6, 11, 15.0, 14, "Monkey bars");
    m.add_edge(7, 8, 5.0, 0, "Blade");
    m.add_edge(7, 12, 5.0, 28, "Spin blades");
    m.add_edge(8, 9, 4.0, 25, "Pressure pads");
    m.add_edge(8, 13, 13.0, 30, "Darts");
    m.add_edge(9, 14, 16.0, 18, "Pillars");
    m.add_edge(10, 11, 5.0, 20, "Rope swing");
    m.add_edge(10, 15, 16.0, 22, "Hand holds");
    m.add_edge(11, 12, 13.0, 30, "Darts");
    m.add_edge(11, 16, 11.0, 10, "Balancing rope");
    m.add_edge(12, 13, 16.0, 18, "Pillars");
    m.add_edge(12, 17, 9.0, 8, "Low wall");
    m.add_edge(13, 14, 5.0, 24, "Floor spikes");
    m.add_edge(13, 18, 15.0, 14, "Monkey bars");
    m.add_edge(14, 19, 9.0, 8, "Low wall");
    m.add_edge(15, 16, 9.0, 6, "Planks");
    m.add_edge(15, 20, 16.0, 18, "Pillars");
    m.add_edge(16, 17, 5.0, 28, "Spin blades");
    m.add_edge(16, 21, 5.0, 24, "Floor spikes");
    m.add_edge(17, 18, 13.0, 30, "Darts");
    m.add_edge(17, 22, 5.0, 0, "Blade");
    m.add_edge(18, 19, 4.0, 25, "Pressure pads");
    m.add_edge(18, 23, 11.0, 10, "Balancing rope");
    m.add_edge(19, 24, 11.0, 12, "Log balance");
    m.add_edge(20, 21, 11.5, 16, "Ledge");
    m.add_edge(21, 22, 15.0, 14, "Monkey bars");
    m.add_edge(22, 23, 16.0, 22, "Handholds");
    m.add_edge(23, 24, 11.5, 16, "Ledge");

    m.shortest_dists(24);
    m.get_distances();
    
    return 0;
}
