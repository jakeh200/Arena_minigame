//
//  WeightedGraph.hpp
//  Brimhaven
//
//  Created by Jake Hickey on 9/29/17.
//  Copyright © 2017 Jake Hickey. All rights reserved.
//

#ifndef WeightedGraph_hpp
#define WeightedGraph_hpp

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>

using namespace std;

class vertex
{
public:
    string title;
    
    vertex(string name){
        title = name;
    }
    void print(){
        cout << title << endl;
    }
    
};

class WeightedGraph
{
private:
    static const int NULL_EDGE = 0;
    vector<vertex*> vertices;
    vector<bool> marks;
    int nmbVertices;
    int maxVertices;
    map<pair<int, int>, float> weights;
    map<int, float> distances;
    
public:
    // constructor
    WeightedGraph(int size){
        nmbVertices = 0;
        maxVertices = size;
        
        vertices.resize(size);
        marks.resize(size);
        for (int i=0;i<size;i++){
            vertices[i] = NULL;
            marks[i] = false;
        }
        clear_distances();
    }
    
    void add_vertex(vertex* aVertex){
        vertices[nmbVertices] = aVertex;
        nmbVertices++;
    }
    
    void add_edge(int fromVertex, int toVertex, float tickswt, float expwt, string name){
        pair<int, int> verts, verts_reversed;
        verts.first = fromVertex;
        verts.second = toVertex;
        verts_reversed.first = toVertex;
        verts_reversed.second = fromVertex;
        weights.emplace(verts_reversed, tickswt);
        weights.emplace(verts, tickswt);

    }
    
    float ticks_are(int fromVertex, int toVertex){
        pair<int, int> verts;
        verts.first = fromVertex;
        verts.second = toVertex;
        float tix = weights.at(verts);
        return tix;
    }
    
    float exp_is(int fromVertex, int toVertex){
        return 0.0;
    }
    
    bool is_edge(int v1, int v2){
        pair<int, int> verts;
        verts.first = v1;
        verts.second = v2;
        map<pair<int, int>, float>::iterator it;
        it = weights.find(verts);
        if(it != weights.end())
            return true;
        return false;
    }
    
    float get_exp_to_tick_ratio(int v1, int v2){
        float exp = exp_is(v1, v2);
        float ticks = ticks_are(v1, v2);
        return exp/ticks;
    }
    
    void clear_distances(){
        for(int i = 0; i < maxVertices; i++){
            distances[i] = 1000.0;
        }
    }
    void get_distances(){
        cout << "Distances from start:\n";
        for(int i = 0; i < maxVertices; i++)
            cout << i << " is " << distances[i] << endl;
    }
    
    void shortest_dists(int start){
        queue <int> q;
        int adjacents[4];
        q.push(start);
        distances[start] = 0.0;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(marks[top])
                continue;
           // cout << top << " is top ";

            adjacents[0] = top + 1;
            adjacents[1] = top + 5;
            adjacents[2] = top - 1;
            adjacents[3] = top - 5;
            
            for(int i = 0; i < 4; i++){
                int next = adjacents[i];
                if(is_edge(top, next)){
                    float weight = ticks_are(top, next);  //gets the ticks between current vertex and the next
//                    cout << "~~~~next is: " << next << ". Distance to next is: " << distances[next] << " and distance to top is: " << distances[top] << endl;
                    if(distances[next] > distances[top] + weight){
                        distances[next] = distances[top] + weight;
                        q.push(next);
                    }
                }
            }
//            cout << "end of loop, top is: " << top << ". Distance from 3 is: " << distances[3] << ".\n";
            marks[top] = true;
        }
    }
    
    ~WeightedGraph()
    {
        for (int i=0;i<nmbVertices;i++)
        {
            delete vertices[i];
        }
    }
};

#endif /* WeightedGraph_hpp */


