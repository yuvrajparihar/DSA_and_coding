import sys 
# For getting input from input.txt file 
sys.stdin = open('/home/yuvraj/yuvi/DSA_and_coding/io/input.txt', 'r')  
  
# Printing the Output to output.txt file 
sys.stdout = open('/home/yuvraj/yuvi/DSA_and_coding/io/output.txt', 'w') 


def aStarAlgo(start_node, stop_node):
        
        open_set = set(start_node) 
        closed_set = set()
        g = {} 
        parents = {}

        g[start_node] = 0
       
        parents[start_node] = start_node
         
         
        while len(open_set) > 0:
            n = None
 
            for v in open_set:
                if n == None or g[v] + heuristic(v) < g[n] + heuristic(n):
                    n = v
             
                     
            if n == stop_node or Graph_nodes[n] == None:
                pass
            else:
                for (m, weight) in get_neighbors(n):
                    
                    if m not in open_set and m not in closed_set:
                        open_set.add(m)
                        parents[m] = n
                        g[m] = g[n] + weight
                         
  
                    else:
                        if g[m] > g[n] + weight:
                        
                            g[m] = g[n] + weight
                           
                            parents[m] = n
                         
                            if m in closed_set:
                                closed_set.remove(m)
                                open_set.add(m)
 
            if n == None:
                print('Path does not exist!')
                return None
 
            if n == stop_node:
                path = []
                
 
                while parents[n] != n:
                    path.append(n)
                    n = parents[n]
 
                path.append(start_node)
 
                path.reverse()
 
                print('Path found: {}'.format(path))
                return path
 
            open_set.remove(n)
            closed_set.add(n)
 
        print('Path does not exist!')
        return None
         
def get_neighbors(v):
    if v in Graph_nodes:
        return Graph_nodes[v]
    else:
        return None

def heuristic(n):
        H_dist = {

             'S': 14,
             'B': 12,
             'C': 11,
             'F': 11,
             'D':6,
             'E': 4,
             'G': 0
             
        }
 
        return H_dist[n]
  
Graph_nodes = {

      'S':[('B',4),('C',3)],
      'B':[('F',5),('E',12)],
      'C':[('E',10),('D',7)],
      'D':[('E',2)],
      'E':[('G',5)],
      'F':[('F',16)],

}

aStarAlgo('S', 'G')