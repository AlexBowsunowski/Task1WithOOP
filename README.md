# Task1WithOOP


### Goal
Checks a graph for bipartition. Draws a graph as bipartite, if it is,
otherwise draws the graph in a circle. 

### Program structure
1. (Class ClDraw)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/ClDraw.cpp] is an abstracted class with a method show
2. (Class ClCircle)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/ClCircle.cpp] implements an abstract class ClDraw, draws a circle.
3. (Class ClLine)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/ClLine.cpp] implements an abstract class ClDraw, draws a line.
4. (Class Edge)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/Edge.cpp] implements an abstract class ClLine, draws a edge.
5. (Class Vertex)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/Vertex.cpp] implements an abstract class ClCircle, draws a vertex.
6. (Class Graph)[https://github.com/AlexBowsunowski/Task1WithOOP/blob/main/Sources/src/Graph.cpp] implements an abstract class Graph, draws a graph considering whether this graph is bipartite.
