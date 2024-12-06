class Solution {
public:
    vector<list<int>> graph;
    vector<bool> visited, explored;

    bool isCyclic(int course) {
        visited[course] = true;

        for (int newCourse : graph[course]) {
            if (!visited[newCourse] && isCyclic(newCourse)) return true;
            else if (!explored[newCourse]) return true;
        }

        explored[course] = true;
        return false;
    
}    

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph = vector<list<int>>(numCourses);
        visited = vector<bool>(numCourses, false);
        explored = vector<bool>(numCourses, false);

        for (const vector<int>& edge : prerequisites) {
            graph[edge[0]].push_back(edge[1]);
        }

        for (int course = 0; course < numCourses; course++) {
            if (!visited[course] && isCyclic(course)) return false;
        }

        return true;
    }
};