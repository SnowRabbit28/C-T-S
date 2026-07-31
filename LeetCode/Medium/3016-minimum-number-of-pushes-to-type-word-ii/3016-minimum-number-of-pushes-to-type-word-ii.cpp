class Solution {
public:
    int minimumPushes(string word) {
        int cnt = 0; //9개 까지 세는 카운트
        int nxt = 1; //9개 이후부터 2로 올릴것
        int answer = 0;
        vector<int> v(26, 0);
        // 먼저 word의 글자 개수를 벡터에넣자
        for (auto& c : word) {
            v[c - 'a']++;
        }
        // 이제 뭐 a = 5 b = 3 이렇게 되겠지?
        // 숫자가 큰 애들은 맨 앞에두고 9개 이후부터는 2로 올려야하잖아.
        // 일단 오름차순으로 그 친구들을 앞에 둬보자
        sort(v.begin(), v.end(), greater<int>());
        // 이러면 뭐 aabvvviiii 이면 ivab로 됐겠지?
        for (int i = 0; i < 26; i++) {
            if(cnt > 7){cnt = 0; nxt++;}
            answer += v[i] * nxt;
            cnt++;
        }
        return answer;
    }
};