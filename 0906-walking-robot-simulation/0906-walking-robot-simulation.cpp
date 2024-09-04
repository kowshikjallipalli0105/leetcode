class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int, int>> obstacleSet;
        for (const auto& obstacle : obstacles) {
            obstacleSet.insert({obstacle[0], obstacle[1]});
        }

        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, y = 0;
        int direction = 0;
        int maxDistance = 0;

        for (int command : commands) {
            if (command == -1) {
                direction = (direction + 1) % 4;
            } else if (command == -2) {
                direction = (direction + 3) % 4;
            } else {
                for (int i = 0; i < command; i++) {
                    int nextX = x + directions[direction].first;
                    int nextY = y + directions[direction].second;
                    
                    if (obstacleSet.find({nextX, nextY}) != obstacleSet.end()) {
                        break;
                    }
                    
                    x = nextX;
                    y = nextY;
                }
            }
            maxDistance = max(maxDistance, x * x + y * y);
        }

        return maxDistance;
    }
};