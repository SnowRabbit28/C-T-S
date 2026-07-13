class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string sample = "123456789";
        vector<int> answer;
        int ml = to_string(low).size();
        int mh = to_string(high).size();

        for(int i = ml; i <= mh; i++){
            for(int j = 0; j <= 9 - i; j++){
                string sub = sample.substr(j,i);
                int num = stoi(sub);
            
                if(num >= low && num <= high)
                    answer.push_back(num);
            }
        }
        return answer;
    }
};