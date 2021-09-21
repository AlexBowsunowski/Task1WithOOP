#include <iostream>
#include "../../Headers/include/Graph.h"

// n = 7
//
//0 0 0 1 1 1 0
//0 0 0 1 0 1 0
//0 0 0 1 0 0 0
//1 1 1 0 0 0 0
//1 0 0 0 0 0 1
//1 1 0 0 0 0 1
//0 0 0 0 1 1 0


// n = 5

//0 1 0 0 1
//1 0 1 0 1
//0 1 0 1 0
//0 0 1 0 1
//1 1 0 1 0


// n = 4

//0 1 0 1
//1 0 0 1
//0 0 0 1
//1 1 1 0

//
//4
//0 1 0 0
//1 0 1 0
//0 0 0 1
//0 0 1 0


int main() {
    int n;
    std::cin>>n;
    int** g = new int*[n];
    for (int i = 0; i < n; ++i) {
        g[i] = new int[n];
        for (int j = 0; j < n; ++j)
            std::cin>>g[i][j];
    }

    auto graph = new Graph(g, n);
    graph->check();
    graph->show();

    return 0;
}
