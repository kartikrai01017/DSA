class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);
        stack<int> st;
        int prevTime = 0;

        for (string log : logs) {
            // parse log
            int id = 0, time = 0;
            bool isStart = false;

            int i = 0;
            while (log[i] != ':') {
                id = id * 10 + (log[i] - '0');
                i++;
            }
            i++; 

            if (log[i] == 's') isStart = true;

            while (log[i] != ':') i++;
            i++; 
            while (i < log.size()) {
                time = time * 10 + (log[i] - '0');
                i++;
            }

            // logic
            if (isStart) {
                if (!st.empty()) {
                    ans[st.top()] += time - prevTime;
                }
                st.push(id);
                prevTime = time;
            } else {
                ans[st.top()] += time - prevTime + 1;
                st.pop();
                prevTime = time + 1;
            }
        }
        return ans;
    }
};