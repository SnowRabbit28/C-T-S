using System;

public class Solution {
    public string solution(string my_string, string overwrite_string, int s) {
        string answer = "";
        for (int i = 0; i < my_string.Length; i++)
         {
             if (i >= s && i < overwrite_string.Length + s )
             {
                 answer += overwrite_string[i-s];
             }
            else { answer += my_string[i]; }
         }
        return answer;
    }
}