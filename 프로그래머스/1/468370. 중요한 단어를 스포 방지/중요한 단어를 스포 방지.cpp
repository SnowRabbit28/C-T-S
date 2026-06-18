#include <bits/stdc++.h>
using namespace std;

int solution(string message, vector<vector<int>> spoiler_ranges) {
    int L = message.length();
    
    // bool값으로 스포방지 지도 만들기
    vector<bool> is_SpoCheck(L,false);
    for(auto& range : spoiler_ranges){
        for(int i = range[0]; i <= range[1]; i++){
            is_SpoCheck[i] = true;
        }
    }
    
    //스포 글자를 넣어둘 벡터와 스포가 아닌 글자를 넣어둘 set
    unordered_set<string> non_spo;
    vector<string> spo;
    
    //단어의 시작 위치를 알기위한 인덱스, 공백
    int wordStart = -1;
    for(int i = 0; i <= L; i++){
        if(i < L && message[i] != ' '){
            //문자열 범위 안 && 공백이 아님 = 글자
            if(wordStart == -1) wordStart = i;
            //지금까지 공백이였다면? 여기가 시작점
        }
        //시작점이 아닌 친구들
        else {
            //공백이 아니라는건, 시작점이 있다는 것.
            if(wordStart != -1){
                // sub으로 글자 자르기, 현재위치 - 시작점 = 단어길이
                string word = message.substr(wordStart, i - wordStart);
                //이 글자는 잘렸으니 스포가 아닙니다.
                bool is_Spo = false;
                
                //방금 자른 글자안에서 확인
                for(int j = wordStart; j < i; j++){
                    //아까 스포지도에서 하나라도 스포가 참이면
                    if(is_SpoCheck[j]){
                        //넌 스포가 맞다. 표시용
                        is_Spo = true;
                        break;
                    }
                }
                //스포가 맞으면 벡터에, 스포가 아니면 set에
                if(is_Spo) spo.push_back(word);
                else non_spo.insert(word);
                //초기화
                wordStart = -1;
            }
        }
    }
    //중복 방지용 set
    int answer = 0;
    unordered_set<string> impo_spo;
    
    for(auto& word : spo){
        //스포글자가 스포 아닌곳에서 나오지않고, 중복도 없다.
        if(non_spo.find(word) == non_spo.end() && impo_spo.find(word) == impo_spo.end())
            answer++;
        impo_spo.insert(word);
    }
    return answer;
}