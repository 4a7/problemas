# Python program to print DFS traversal from a 
# given given graph 
from collections import defaultdict 
  
# This class represents a directed graph using 
# adjacency list representation 
class Graph: 
  
    # Constructor 
    def __init__(self): 
  
        # default dictionary to store graph 
        self.graph = defaultdict(list)
        print(self.graph) 
  
    # function to add an edge to graph 
    def addEdge(self,u,v): 
        self.graph[u].append(v)
        self.graph[v].append(u) 
  
    # A function used by DFS 
    def DFSUtil(self, s, t, visited): 
  
        # Mark the current node as visited and print it 
        visited[s] = True
        
        # Recur for all the vertices adjacent to this vertex 
        pathB = True if (s == t) else False # pathB = path Boolean
        
        res = ("", pathB)

        if(not pathB):
            for i in self.graph[s]:
                if visited[i] == False: 
                    res = self.DFSUtil(i, t, visited) 
                    if(res[1]):
                        break
        pathB = res[1]
        path = codigos[s] if pathB else "" 
        path += res[0] 
        #if(pathB):
        #    print(s)
        return (path, pathB)

  
    # The function to do DFS traversal. It uses 
    # recursive DFSUtil() 
    def DFS(self, s, t): 
  
        # Mark all the vertices as not visited 
        visited = [False]*(V+10) 
  
        # Call the recursive helper function to print 
        # DFS traversal 
        res = self.DFSUtil(s, t, visited) 
        return res
  

# Driver code 
# Create a graph given in the above diagram 
g = Graph() 

fline = input().split()
V = int(fline[0])
E = int(fline[1])

codigos = [""] + input().split()

for _ in range(V-1):
    path = [int(x) for x in input().split()]
    g.addEdge(path[0], path[1])

for _ in range(E):
    path = [int(x) for x in input().split()]
    res = g.DFS(path[0], path[1]) 
    print(int(res[0])%188888881)
