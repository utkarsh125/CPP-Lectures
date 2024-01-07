import heapq

def astar(graph, start, goal, heuristic):
    open_set = [(0, start)]
    closed_set = set()
    g_score = {start: 0}
    came_from = {}

    while open_set:
        current_cost, current_node = heapq.heappop(open_set)

        if current_node == goal:
            path = reconstruct_path(start, goal, came_from)
            return path

        closed_set.add(current_node)

        for neighbor, cost in graph[current_node]:
            if neighbor in closed_set:
                continue

            tentative_g_score = g_score[current_node] + cost
            if neighbor not in [node[1] for node in open_set] or tentative_g_score < g_score.get(neighbor, float('inf')):
                g_score[neighbor] = tentative_g_score
                f_score = tentative_g_score + heuristic(neighbor, goal)
                heapq.heappush(open_set, (f_score, neighbor))
                came_from[neighbor] = current_node

    return None  # No path found

def reconstruct_path(start, goal, came_from):
    path = [goal]
    while goal != start:
        goal = came_from[goal]
        path.insert(0, goal)
    return path


graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('A', 1), ('C', 2), ('D', 5)],
    'C': [('A', 4), ('B', 2), ('D', 1)],
    'D': [('B', 5), ('C', 1)]
}

heuristic = lambda a, b: 0  
path = astar(graph, 'A', 'D', heuristic)
print(path)
