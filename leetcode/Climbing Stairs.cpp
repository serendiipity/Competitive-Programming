int solution[46];

class Solution {
public:
    int solve(int stairs) {
        if (solution[stairs] != -1) {
            return solution[stairs];
        }
        return solution[stairs] = solve(stairs - 1) + solve(stairs - 2);
    }
    int climbStairs(int n) {
        fill(solution, solution + 46, -1);
        solution[0] = 1;
        solution[1] = 1;
        solution[2] = 2;
        return solve(n);
    }
};
