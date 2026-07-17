class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n; i++) {
            string str = to_string(i);
            if (i % 3 == 0 && i % 5 == 0) {
                str = "FizzBuzz";
            } else if (i % 3 == 0) {
                str = "Fizz";
            } else if (i % 5 == 0) {
                str = "Buzz";
            }
            answer[i - 1] = str;
        }
        return answer;
    }
};
